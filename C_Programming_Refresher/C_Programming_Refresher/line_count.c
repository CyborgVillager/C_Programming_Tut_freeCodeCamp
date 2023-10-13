#include <stdio.h>

/* count lines in input */
int main() {
    int c, nl;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;  // Increment line count if a newline character is encountered
        }
    }

    printf("%d\n", nl);  // Print the line count

    return 0;  // Return 0 to indicate successful completion
}
