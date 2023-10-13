#include <stdio.h>

// Function to copy string t to string s
void stringCopy(char s[], char t[]);

int main() {
    // Initializing two character arrays (or strings).
    char original[] = "Spore Game";
    char copied[20]; // Make sure this array is large enough to store the copied string!

    // Display original string.
    printf("Original: %s\n", original);

    // Copy the string using our custom function.
    stringCopy(copied, original);

    // Display copied string.
    printf("Copied: %s\n", copied);

    return 0;
}

// Function definition: Copies string t to string s.
void stringCopy(char s[], char t[]) {
    int i = 0;

    while ((s[i] = t[i]) != '\0') {
        i++;
    }
}
