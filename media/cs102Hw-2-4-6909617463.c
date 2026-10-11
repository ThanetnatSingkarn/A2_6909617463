#include <stdio.h>

int main() {
    int num1, num2, small, large, i;

    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) {
        small = num1;
        large = num2;
    } else {
        small = num2;
        large = num1;
    }

    printf("All the numbers that can be divided by 13 are: \n");

    for (i = small; i <= large; i++) {
        if (i % 13 == 0) {
            printf("%d\n", i);
        }
    }

    printf("Bye!!\n");

    return 0;
}