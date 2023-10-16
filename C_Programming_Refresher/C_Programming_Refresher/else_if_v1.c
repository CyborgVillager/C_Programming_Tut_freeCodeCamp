#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7) to get the day of the week: ");
    scanf_s("%d", &day);

    if (day == 1) {
        printf("Monday\n");
    }
    else if (day == 2) {
        printf("Tuesday\n");
    }
    else if (day == 3) {
        printf("Wednesday\n");
    }
    else if (day == 4) {
        printf("Thursday\n");
    }
    else if (day == 5) {
        printf("Friday\n");
    }
    else if (day == 6) {
        printf("Saturday\n");
    }
    else if (day == 7) {
        printf("Sunday\n");
    }
    else {
        printf("Invalid Input. Please enter a number between 1 to 7.\n");
    }

    return 0;
}
