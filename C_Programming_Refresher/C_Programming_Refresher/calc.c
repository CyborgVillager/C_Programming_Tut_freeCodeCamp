// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operation;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf_s("%c", &operation, sizeof(operation));

    // Clearing the input buffer after reading a character
    while (getchar() != '\n');

    printf("Enter two operands: ");
    scanf_s("%lf %lf", &n1, &n2);

    switch (operation)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
        break;

    case '/':
        if (n2 != 0)
            printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
        else
            printf("Error! Division by zero.");
        break;

    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
