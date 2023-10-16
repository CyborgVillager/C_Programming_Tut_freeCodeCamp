#include <stdio.h>

int main() {
    // Declare two integer variables as register variables for faster access
    register int num1 = 5;
    register int num2 = 10;

    // Perform some arithmetic operations using the register variables
    int sum = num1 + num2;         // Calculate the sum
    int difference = num1 - num2;  // Calculate the difference
    int product = num1 * num2;     // Calculate the product

    // Display the results
    printf("Sum: %d\n", sum);           // Print the sum
    printf("Difference: %d\n", difference); // Print the difference
    printf("Product: %d\n", product);     // Print the product

    return 0;
}
