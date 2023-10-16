#include <stdio.h>

int main() {
    int n;
    long long factorial = 1; // Use long long to handle larger factorial values

    printf("Factorial Calculator\n");
    printf("Enter a positive integer: ");
    scanf_s("%d", &n); // Use scanf_s for safer input

    // If the user enters a negative integer
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
        return 1; // Exit with an error code
    }

    int temp = n; // Store the original value of n for display later

    // Calculate factorial using a while loop
    while (n > 0) {
        factorial *= n;
        n--;
    }

    printf("Factorial of %d = %lld\n", temp, factorial);

    return 0;
}
