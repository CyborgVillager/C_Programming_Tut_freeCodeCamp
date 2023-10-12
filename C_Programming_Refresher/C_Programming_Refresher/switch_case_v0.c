#include <stdio.h>

int main() {
    int choice;

    // Prompt the user for input
    printf("Enter a number (1-3): ");
    scanf_s("%d", &choice);

    // Check the choice and display appropriate message
    switch (choice) {
    case 1:
        printf("You selected One.\n");
        break;  // Exit the switch case
    case 2:
        printf("You selected Two.\n");
        break;
    case 3:
        printf("You selected Three.\n");
        break;
    default:
        printf("Invalid choice.\n");  // For any choice not in 1, 2, or 3
    }

    return 0;
}
