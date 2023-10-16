#include <stdio.h>

// File scope (also called global scope).
// This variable is accessible throughout this file and, 
// if referenced using the 'extern' keyword, from other files as well.
int fileScopeVar = 10;

// File scope with `static` keyword. 
// This variable is accessible only within this file.
// Other files cannot access this variable even with the 'extern' keyword.
static int staticFileScopeVar = 20;

// Function to demonstrate block and function scope.
void scopeDemoFunction() {
    // Block scope.
    // This variable is accessible only within this function.
    // It gets destroyed once we exit this function.
    int blockScopeVar = 30;

    printf("Inside scopeDemoFunction:\n");
    printf("blockScopeVar: %d\n", blockScopeVar);
    printf("fileScopeVar: %d\n", fileScopeVar);
    printf("staticFileScopeVar: %d\n", staticFileScopeVar);

    {
        // Nested block scope.
        // Variables declared inside this block are only accessible within this block.
        // They get destroyed once we exit this block.
        int nestedBlockScopeVar = 40;
        printf("nestedBlockScopeVar: %d\n", nestedBlockScopeVar);

        // This declaration hides the outer blockScopeVar for this block.
        // This is an example of variable shadowing.
        int blockScopeVar = 50;
        printf("Overridden blockScopeVar inside nested block: %d\n", blockScopeVar);
    }

    // The nestedBlockScopeVar is not accessible outside its block.
    // Uncommenting the below line will result in a compile error.
    // printf("nestedBlockScopeVar: %d\n", nestedBlockScopeVar);
}

int main() {
    printf("Inside main:\n");
    printf("fileScopeVar: %d\n", fileScopeVar);

    // Variables with block or nested block scope inside scopeDemoFunction
    // are not accessible here. Uncommenting the below line will result in 
    // a compile error because blockScopeVar's scope is limited to scopeDemoFunction.
    // printf("blockScopeVar: %d\n", blockScopeVar);

    scopeDemoFunction();

    return 0;
}
