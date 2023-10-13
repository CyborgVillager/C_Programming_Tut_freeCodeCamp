#include <stdio.h>  // Include the standard I/O library to access functions like printf.

/* Main objective: This program prints a Fahrenheit to Celsius conversion table.
   It covers a range of temperatures from 0 to 300 Fahrenheit in steps of 20 degrees.
   The conversion formula used is the standard formula: Celsius = (5/9) * (Fahrenheit-32).
   The results are represented in floating-point format for better accuracy. */

int main() {  // Start of the main function.

    float fahr, celsius;  // Declare floating-point variables for Fahrenheit and Celsius values.
    float lower = 0, upper = 300, step = 20;  // Initialize floating-point variables for the starting temperature (lower), the ending temperature (upper), and the increment value (step) right in the declaration.

    // Use a 'for' loop to iterate through the range of Fahrenheit temperatures from 'lower' to 'upper' in increments of 'step'.
    for (fahr = lower; fahr <= upper; fahr += step) {

        // Conversion of Fahrenheit to Celsius using the standard formula.
        celsius = (5.0 / 9.0) * (fahr - 32.0);

        // Print the Fahrenheit and Celsius values with specific formatting.
        // Fahrenheit is displayed with no decimal places (3 spaces wide) and Celsius is displayed with 1 decimal place (6 spaces wide).
        printf("%3.0f %6.1f\n", fahr, celsius);
    }

    return 0;  // Indicate successful completion and exit the program.
}
