#include <stdio.h>

// Function declaration: This function will receive a copy of the passed value and will attempt to modify it.
void modifyValue(int val);

// Main function - starting point of our program.
int main() {
    // Initializing the variable 'num' with value 5.
    int num = 5;

    // Display the original value of 'num' before making the function call.
    printf("Original value of num before calling function: %d\n", num);

    // Here, we're passing 'num' to the function by value.
    // This means that 'modifyValue' receives a copy of 'num' and not the actual variable.
    modifyValue(num);

    // Display the value of 'num' after the function call to show that it remains unchanged.
    printf("Value of num after calling function: %d\n", num);

    // Indicate that the program finished successfully.
    return 0;
}

// Function definition for 'modifyValue'.
void modifyValue(int val) {
    // Inside the function, we're trying to modify the copied value.
    val = val * 2;

    // Display the modified value. Note that this modification does not affect 'num' in the main function.
    printf("Value inside function after modification: %d\n", val);
}
