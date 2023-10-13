#include <stdio.h>
#define MESSAGE "Type a character or #, the program will copy your input\n To see the data hit Ctrl+Z and then Enter" // Represents a constant string message.
/* count characters in input; 1st version */
int main() {
    printf("%s\n", MESSAGE); //print the  message from #define MESSAGE
    long nc;
    nc = 0;

    while (getchar() != EOF) {
        ++nc;  // Increment character count
    }

    printf("Total Characters : %ld\n", nc);  // Print the character count

    return 0;  // Return 0 to indicate successful completion
}
/*


%s: String of characters. Expects a char * argument.

%d or %i: Signed decimal integer. Expects an int argument.

%u: Unsigned decimal integer. Expects an unsigned int argument.

%f: Floating-point number (decimal notation). Expects a float or double argument.

%e: Scientific notation (e.g., 3.14e+00). Expects a float or double argument.

%g: Shorter of %f and %e. Expects a float or double argument.

%c: Single character. Expects an int or char argument.

%p: Pointer address. Expects a pointer argument (e.g., void *).

%x: Unsigned hexadecimal integer (lowercase letters). Expects an unsigned int argument.

%X: Unsigned hexadecimal integer (uppercase letters). Expects an unsigned int argument.

%o: Unsigned octal integer. Expects an unsigned int argument.

%l (used as a prefix): Specifies that the conversion will be applied to a long or long long, e.g., %ld for long int or %lld for long long int.

%h (used as a prefix): Specifies that the conversion will be applied to a short, e.g., %hd for short int.

%%: To print a literal '%' character.






*/