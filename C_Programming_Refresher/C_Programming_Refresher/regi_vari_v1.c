#include <stdio.h>
// Function with void return type to add spaces (newline characters) between lines of output
void space_printing();

void regi_example_static() {
    // Declare two integer variables as register variables for faster access
    register int num1 = 5;
    register int num2 = 10;

    // Perform some arithmetic operations using the register variables
    int sum = num1 + num2;         // Calculate the sum
    int difference = num1 - num2;  // Calculate the difference
    int product = num1 * num2;     // Calculate the product

    // Display the results
    printf("Sum: %d\n", sum);           // Print the sum
    space_printing();
    printf("Difference: %d\n", difference); // Print the difference
    space_printing();
    printf("Product: %d\n", product);     // Print the product

}

// Function to demonstrate the use of static variables
void demoStaticVariable() {
    // Declare a static integer variable 'count'
    static int count = 0;

    // Increment 'count' by 1
    count++;

    // Print the current value of 'count'
    printf("Static Variable 'count': %d\n", count);
}

void space_printing() {
    //make spaces between each input
    printf("\n");
}
int main() {
    printf("Combining both Static variable & registr variable\nkek\n");
    space_printing(); //space input
    regi_example_static(); //regi example line 3
    space_printing(); //space input
    demoStaticVariable();  //demo static variable line 21
}