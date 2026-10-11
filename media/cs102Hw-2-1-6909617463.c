#include <stdio.h>

int main() {
    double mother, father, avg, low, high;

    printf("Enter the height of the mother (centimeters): ");
    scanf("%lf", &mother);

    printf("Enter the height of the father (centimeters): ");
    scanf("%lf", &father);

    avg = (mother + father) / 2;

    low = avg - 13.5;
    high = avg + 13.5;

    printf("The possible height of the child is between %.2lf to %.2lf centimeters.\n", low, high);

    return 0;
}