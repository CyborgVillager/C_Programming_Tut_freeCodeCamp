#include <stdio.h>

// Function to generate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("The Fibonacci Sequence\n\n");

    printf("The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones. It starts from 0 and 1.\n\n");

    printf("Here's the sequence for the first few Fibonacci numbers:\n\n");
    printf("0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...\n\n");

    printf("Would you like to see the first N Fibonacci numbers? Enter a value for N: ");
    int n;
    scanf_s("%d", &n);

    printf("\nHere are the first %d Fibonacci numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d", fibonacci(i));
        if (i < n - 1) printf(", ");  // Avoid adding comma after the last number
    }

    printf("\n\nThe Fibonacci sequence has applications in various fields including mathematics, computer science, and even in nature where the patterning of leaves, flowers, and fruits often follows the Fibonacci sequence.\n");

    return 0;
}
