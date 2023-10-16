#include <stdio.h>

int main() {
    int sum = 0;  // Initialize sum to 0
    int number;   // To store user input

    printf("Enter positive numbers to get their sum. Enter a negative number to stop.\n");

    // The condition (1) in the while loop always evaluates to true, making this an infinite loop.
    // This design choice is deliberate, allowing the program to continually prompt the user for input.
    // We rely on the 'break' statement inside the loop to exit based on user input.
    while (1) {
        printf("Enter a number: ");
        scanf_s("%d", &number);  // Use scanf_s for safer input

        if (number < 0) {
            break;  // Exit the loop if a negative number is entered
        }

        sum += number;  // Add the entered number to the sum
    }

    printf("The sum of entered positive numbers is: %d\n", sum);

    return 0;
}
