#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter first number: ");
    scanf_s("%lf", &num1);

    printf("Enter second number: ");
    scanf_s("%lf", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf_s(" %c", &operator);  // space before %c to consume any whitespace

    switch (operator) {
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
        break;
    case '/':
        if (num2 != 0.0) {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        }
        else {
            printf("Error! Division by zero.\n");
        }
        break;
    default:
        printf("Invalid operator! Use +, -, *, or /.\n");
        break;
    }

    return 0;
}
