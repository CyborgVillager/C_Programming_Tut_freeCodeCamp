#include <stdio.h>  // Include the standard I/O library.

/* This program copies its input to its output.
   This is the first version of this program.
   */
#define MESSAGE "Type a character or #, the program will copy your input" // Represents a constant string message.
#define MESSAGE1 "And Oh yea.... Frick Java, This is the C Gang, we rule the streets ;}" // Represents a constant string message.
int main() {  // Beginning of the main function.
    printf("%s\n", MESSAGE); //print the  message from #define MESSAGE
    printf("%s\n", MESSAGE1);
    int c;  // Declare an integer variable 'c'. This will hold the character input by the user.

    c = getchar();  // Read the next character from the standard input (usually the keyboard) and store it in 'c'.

    /* Continue reading and printing characters until EOF(End of File) is encountered.
   In many systems, EOF can be signaled by pressing Ctrl+D (Linux/Unix) or Ctrl+Z (Windows) in the terminal. 
   */
    while (c != EOF) {  // Check if the character read is not the end-of-file indicator.

        putchar(c);  // Print the character to the standard output (usually the screen).

        c = getchar();  // Read the next character from standard input and store it in 'c'.
    }

    return 0;  // Indicate successful program termination.
}
