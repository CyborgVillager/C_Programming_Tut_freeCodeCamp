#include <stdio.h>

/* This program counts digits, white spaces (spaces, tabs, and newlines), and other characters. */
int main() {
    int c, i, nwhite, nother;
    int ndigit[10]; // An array to hold counts for each digit (0-9).

    nwhite = nother = 0; // Initialize the counters.

    // Initialize the digit counts to 0.
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    // Process each character until EOF (End of File) is encountered.
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            // If the character is a digit, increment the corresponding count in ndigit array.
            ++ndigit[c - '0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            // If the character is a whitespace (space, newline, or tab), increment the white space count.
            ++nwhite;
        }
        else {
            // For any other character, increment the other count.
            ++nother;
        }
    }

    // Print the results.
    printf("digits =");
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]); // Print counts for each digit.
    }
    printf(", white space = %d, other = %d\n", nwhite, nother); // Print counts for white spaces and other characters.

    return 0;  // Return 0 to indicate successful completion
}
