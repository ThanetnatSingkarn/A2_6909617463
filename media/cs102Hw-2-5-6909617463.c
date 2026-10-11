#include <stdio.h>

int main() {
    int n, i, isPrime;

    printf("Please enter an integer : ");
    scanf("%d", &n);

    while (n < 2 || n > 9999999) {
        printf("%d is not between 2 to 9999999, please re-enter.\n", n);
        printf("Please enter an integer : ");
        scanf("%d", &n);
    }

    isPrime = 1;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}