#include <stdio.h>

int main() {
    int numbers[5]; // Declare an array of 5 integers.
    int sum = 0;    // Initialize sum to store the total of the numbers.
    float average;  // To store the average of the numbers.

    printf("Enter 5 integers:\n");

    // Loop to get 5 integers from the user.
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf_s("%d", &numbers[i]);
        sum += numbers[i]; // Add the number to the sum.
    }

    // Compute the average.
    average = (float)sum / 5;

    // Display the average.
    printf("Average of the entered numbers: %.2f\n", average);

    return 0;
}
