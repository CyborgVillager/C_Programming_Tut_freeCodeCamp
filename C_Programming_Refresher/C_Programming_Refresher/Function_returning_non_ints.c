#include <stdio.h>
#include <ctype.h>

/*
 * string_to_double: Convert string s to double.
 * This function is useful for reading and converting user input or file data
 * where numbers are represented as strings, into actual double values for further calculations.
 *
 * s: The input string representing a floating point number.
 * Returns: The double value representation of the string.
 */
double string_to_double(char s[]) {
    double val, power;
    int i, sign;

    // Skip white spaces at the beginning of the string.
    for (i = 0; isspace(s[i]); i++);

    // Determine the sign of the number.
    sign = (s[i] == '-') ? -1 : 1;

    // Move the index if there's a sign character.
    if (s[i] == '+' || s[i] == '-') {
        i++;
    }

    // Convert digits before the decimal point.
    for (val = 0.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
    }

    // If a decimal point is found, process digits after it.
    if (s[i] == '.') {
        i++;
    }
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }

    // Return the calculated value with the appropriate sign.
    return sign * val / power;
}

int main() {
    printf("This program converts a string representation of a floating point number into its double equivalent.\n");
    printf("Possible usages:\n");
    printf("1. Convert user input given as string to double for mathematical operations.\n");
    printf("2. Process file data where numbers are stored as strings.\n");
    printf("3. Parse data from APIs or web sources where numbers are returned as strings.\n");
    printf("4. For any application where you need precise floating-point arithmetic from string data.\n\n");

    char testStr[] = "-523.55";
    printf("Example:\nInput String: %s\nConverted Value: %f\n", testStr, string_to_double(testStr));
    return 0;
}
