#include <stdio.h>

// Function declarations (prototypes) for add and subtract functions
double add(double a, double b);
double subtract(double a, double b);

int main() {
    // Define two double variables 'x' and 'y' and initialize them with values
    double x = 5.0, y = 3.0;

    // Print the result of adding 'x' and 'y'
    printf("%f + %f = %f\n", x, y, add(x, y));

    // Print the result of subtracting 'y' from 'x'
    printf("%f - %f = %f\n", x, y, subtract(x, y));

    return 0;
}

// Function definitions for 'add' and 'subtract' functions
// These functions perform addition and subtraction operations on two double numbers
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}
