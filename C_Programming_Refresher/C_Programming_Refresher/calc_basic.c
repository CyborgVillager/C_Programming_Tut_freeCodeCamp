#include <stdio.h>

int main() {
    int num1, num2, choice;

    // Menu
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Choice (1-4): ");
    scanf_s("%d", &choice);

    printf("First number: ");
    scanf_s("%d", &num1);
    printf("Second number: ");
    scanf_s("%d", &num2);

    switch (choice) {
    case 1:
        printf("Result: %d\n", num1 + num2);
        break;
    case 2:
        printf("Result: %d\n", num1 - num2);
        break;
    case 3:
        printf("Result: %d\n", num1 * num2);
        break;
    case 4:
        if (num2 != 0) {
            printf("Result: %.2f\n", (float)num1 / num2);
        }
        else {
            printf("Cannot divide by zero!\n");
        }
        break;
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
