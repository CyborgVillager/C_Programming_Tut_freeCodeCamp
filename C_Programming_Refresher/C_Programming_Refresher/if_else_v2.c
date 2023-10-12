#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf_s("%d", &year);

    // Check if the year is divisible by 4
    if (year % 4 == 0) {
        // If year is divisible by 100, it should also be divisible by 400 to be a leap year
        if (year % 100 == 0) {
            // If year is divisible by 400, then it's a leap year
            if (year % 400 == 0) {
                printf("The year %d is a leap year.\n", year);
            }
            // If year is divisible by 100 but not by 400, it's not a leap year
            else {
                printf("The year %d is not a leap year.\n", year);
            }
        }
        // If year is divisible by 4 but not by 100, it's a leap year
        else {
            printf("The year %d is a leap year.\n", year);
        }
    }
    // If year is not divisible by 4, it's not a leap year
    else {
        printf("The year %d is not a leap year.\n", year);
    }

    return 0;
}
