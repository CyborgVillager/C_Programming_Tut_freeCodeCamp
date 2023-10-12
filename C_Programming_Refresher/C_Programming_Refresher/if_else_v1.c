#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf_s("%d", &num);

    // Check if the number is positive
    if (num > 0) {
        printf("The number is positive.\n");
    }
    // If the number was not positive, check if it's negative
    else if (num < 0) {
        printf("The number is negative.\n");
    }
    // If the number is neither positive nor negative, it must be zero
    else {
        printf("The number is zero.\n");
    }

    return 0;
}
