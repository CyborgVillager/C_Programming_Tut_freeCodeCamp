#include <stdio.h>
#define MESSAGE "Type a character or #, the program will copy your input\n To see the data hit Ctrl+Z and then Enter" // Represents a constant string message.
/* count characters in input; 2nd version */
int main() {
    printf("%s\n", MESSAGE);
    double nc;

    // Use a for loop to count characters until EOF is encountered
    for (nc = 0; getchar() != EOF; ++nc)
        ;  // The loop body is empty; all work is done in the loop's conditions and increment
 
    printf("Total Characters: %.0f\n", nc);  // Print the character count

    return 0;  // Return 0 to indicate successful completion
}
