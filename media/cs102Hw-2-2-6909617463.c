#include <stdio.h>

int main() {
    int a, b, c;

    printf("Please enter length of each side of your triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || b + c <= a || a + c <= b) {
        printf("This is NOT a possible triangle.\n");
    } else if (a == b && b == c) {
        printf("This is an equilateral triangle.\n");
    } else if (a == b || b == c || a == c) {
        printf("This is an isosceles triangle.\n");
    } else {
        printf("This is a scalene triangle.\n");
    }

    return 0;
}