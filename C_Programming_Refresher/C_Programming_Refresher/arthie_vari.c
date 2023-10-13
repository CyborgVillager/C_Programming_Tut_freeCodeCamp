#include <stdio.h>  // Include the standard I/O library for functions like printf

/* Main function starts here. In C, execution starts with the main() function.
   The 'main' function doesn't have a return type here, but modern standards recommend 'int'. 
   
	char character - a single byte
	short short integer
	long long integer
	double double-precision floating point
   
   */
main()
{
	int fahr, celsius;  // Declare two integer variables: 'fahr' for Fahrenheit and 'celsius' for Celsius
	int lower, upper, step;  // Declare three more integer variables: 'lower' for the starting temperature, 'upper' for the maximum temperature, and 'step' for the increment

	lower = 0;   // Initialize 'lower' to 0, which is the starting temperature in Fahrenheit
	upper = 300; // Set the 'upper' limit of the temperature table to 300 degrees Fahrenheit
	step = 20;   // Set the 'step' size as 20 degrees. This means the table will display temperatures for every 20-degree increment

	fahr = lower;  // Initialize the 'fahr' variable with the 'lower' value. This is our starting point.

	// A 'while' loop that runs as long as the current 'fahr' value is less than or equal to the 'upper' limit
	while (fahr <= upper) {
		// Convert the current 'fahr' temperature to Celsius using the conversion formula
		celsius = 5 * (fahr - 32) / 9;

		// Print the Fahrenheit and Celsius values in tab-separated columns
		printf("%d\t%d\n", fahr, celsius);

		// Increase the 'fahr' value by the 'step' size for the next iteration
		fahr = fahr + step;
	}
}
