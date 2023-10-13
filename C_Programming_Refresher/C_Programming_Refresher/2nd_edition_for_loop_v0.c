#include <stdio.h>

int main() {
    int num, i;             // Declare variables: 'num' for the user's input and 'i' as a loop counter.
    unsigned long long factorial = 1; // Declare and initialize 'factorial' to store the result. 

    // Prompt the user to enter a number.
    printf("Enter a positive integer: ");
    scanf_s("%d", &num);

    // Check if the user entered a negative number.
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }
    else {
        // Calculate factorial using a 'for' loop.
        for (i = 1; i <= num; ++i) {
            factorial *= i;  // Multiply 'factorial' by 'i' in each iteration.
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
