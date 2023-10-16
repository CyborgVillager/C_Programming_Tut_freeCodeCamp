#include <stdio.h>

// Declaration of the function fun(). 
// It informs the compiler that a function named fun() will be used later. Its an GLOBAL var
int fun();

// Global variable declaration.
// This variable has a scope throughout the file. 
// Any function can access this variable unless it's shadowed by a local variable with the same name.
int var = 10;

int main() {
    // Local variable declaration.
    // This variable is only accessible within the main() function.
    // This local 'var' will shadow the global 'var' within the main() function.
    int var = 34;
    printf("%d\n", var);  // This will print the local 'var', i.e., 34.

    fun();  // Calling the function fun().
    return 0;
}

int fun() {
    // This function accesses the global 'var' as there is no local variable named 'var' inside fun().
    printf("%d\n", var);  // This will print the global 'var', i.e., 10.
}
