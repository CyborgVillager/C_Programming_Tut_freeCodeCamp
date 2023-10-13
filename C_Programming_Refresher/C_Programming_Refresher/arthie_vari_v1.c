#include <stdio.h>  // Include the standard I/O library to access functions like printf.

/* Main objective: This program prints a Fahrenheit to Celsius conversion table.
   It covers a range of temperatures from 0 to 300 Fahrenheit in steps of 20 degrees.
   The conversion formula used is the standard formula: Celsius = (5/9) * (Fahrenheit-32).
   The results are represented in floating-point format for better accuracy. */

int main() {  // Start of the main function. Note: 'int' added before 'main' to denote the return type.

    float fahr, celsius;  // Declare floating-point variables for Fahrenheit and Celsius values.
    float lower, upper, step;  // Declare floating-point variables for the starting temperature (lower), the ending temperature (upper), and the increment value (step).

    lower = 0;   // Initialize 'lower' to 0, representing the starting temperature in Fahrenheit.
    upper = 300; // Set the 'upper' limit of the temperature table to 300 degrees Fahrenheit.
    step = 20;   // Define the 'step' size as 20 degrees, which means the table will display temperatures for every 20-degree increment.

    fahr = lower;  // Initialize the 'fahr' variable with the 'lower' value. This sets our starting point for the table.

    // The while loop continues as long as the current 'fahr' value is less than or equal to the 'upper' limit.
    while (fahr <= upper) {

        // Conversion of Fahrenheit to Celsius using the standard formula.
        celsius = (5.0 / 9.0) * (fahr - 32.0);

        // Print the Fahrenheit and Celsius values with specific formatting.
        // Fahrenheit is displayed with no decimal places (3 spaces wide) and Celsius is displayed with 1 decimal place (6 spaces wide).
        printf("%3.0f %6.1f\n", fahr, celsius);

        // Increment the 'fahr' value by the defined 'step' size to evaluate the next temperature in the sequence.
        fahr = fahr + step;
    }

    return 0;  // Indicate successful completion and exit the program. (Note: This is a standard practice in C to denote that the program has finished without errors.)
}
