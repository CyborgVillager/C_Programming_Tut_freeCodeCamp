#include <stdio.h>

// Symbolic Constants:
#define PI 3.14159       // Represents the constant value of Pi.
#define MAX_SIZE 200     // Represents a maximum size, often used for array declarations.
#define MESSAGE "Welcome to the C VillagerPvP or Mabi ^_* ;}" // Represents a constant string message.

int main() {
    double radius = 20.0, area;  // Declare and initialize the radius, and declare the area variable.

    // Calculate the area of a circle using the formula: area = PI * radius^2
    // The symbolic constant PI is used here.
    area = PI * radius * radius;
    printf("Area of a circle with radius %.2lf = %.2lf\n", radius, area);

    // Declare an integer array with a size defined by the symbolic constant MAX_SIZE.
    int array[MAX_SIZE];

    // Print a welcome message using the symbolic constant MESSAGE.
    printf("%s\n", MESSAGE);

    return 0;
}
