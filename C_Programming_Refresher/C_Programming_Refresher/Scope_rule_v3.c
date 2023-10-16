#include <stdio.h>

// Declaration of functions fun1() and fun2().
int fun1();
int fun2();

// Global variable declaration. It's available for all functions in this file.
int globalVar = 50;

int main() {
    // Local variable to main()
    int localVar = 20;

    printf("In main() - Local variable: %d\n", localVar);  // Prints the local variable of main(), i.e., 20.
    printf("In main() - Global variable: %d\n", globalVar);  // Prints the global variable, i.e., 50.

    fun1();  // Calling fun1()
    fun2();  // Calling fun2()
    return 0;
}

int fun1() {
    // Local variable to fun1(), shadowing the globalVar
    int globalVar = 30;

    printf("In fun1() - Local 'globalVar': %d\n", globalVar);  // This will print the local 'globalVar' of fun1(), i.e., 30.
}

int fun2() {
    // This function accesses the global 'globalVar' as there is no local variable named 'globalVar' inside fun2().
    printf("In fun2() - Global variable: %d\n", globalVar);  // This will print the global 'globalVar', i.e., 50.
}
