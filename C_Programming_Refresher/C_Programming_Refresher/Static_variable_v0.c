#include <stdio.h>

// Function to demonstrate the use of static variables
void demoStaticVariable() {
    // Declare a static integer variable 'count'
    static int count = 0;

    // Increment 'count' by 1
    count++;

    // Print the current value of 'count'
    printf("Static Variable 'count': %d\n", count);
}

int main() {
    // Call the 'demoStaticVariable' function multiple times
    printf("This program demonstrates static variables in C.\n");

    // Call the function three times
    demoStaticVariable(); // First call
    demoStaticVariable(); // Second call
    demoStaticVariable(); // Third call

    return 0; // Indicates successful program execution
}
