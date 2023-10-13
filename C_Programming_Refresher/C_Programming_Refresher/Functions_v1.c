#include <stdio.h>

// Function prototype declaration. This tells the compiler that we have a function named "power"
// that takes two integers as arguments and returns an integer.
int power(int m, int n);

// Entry point of our program.
int main() {
    int i;

    // Looping from 0 to 9 to test the power function with various exponents.
    for (i = 0; i < 10; ++i) {
        // Printing the result of the power function for base 2 and -3.
        // This demonstrates positive and negative base handling.
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    // Return 0 indicates successful program termination.
    return 0;
}

// Definition of the power function.
int power(int base, int n) {
    int i, p = 1;

    // Loop to calculate the power.
    // It multiplies the base with itself n times.
    for (i = 1; i <= n; ++i) {
        p = p * base;
    }

    // Returns the final computed value.
    return p;
}

