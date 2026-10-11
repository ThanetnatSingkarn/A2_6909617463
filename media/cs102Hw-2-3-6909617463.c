#include <stdio.h>

int main() {
    int seconds, hours, minutes, remSeconds;

    printf("Please enter the time in seconds: ");
    scanf("%d", &seconds);

    if (seconds < 0) {
        printf("Invalid Input !!\n");
        return 0;
    }

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remSeconds = seconds % 60;

    printf("The time is %d hour(s), %d minute(s), and %d second(s).\n", hours, minutes, remSeconds);

    return 0;
}