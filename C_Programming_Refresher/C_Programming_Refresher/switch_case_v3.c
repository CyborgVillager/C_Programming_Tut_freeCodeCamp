#include <stdio.h>
#include <stdlib.h>  // For exit() function

char handleChoiceA() {
    char choice;

    while (1) {  // Infinite loop
        printf("You selected A.\n");
        printf("Enter a character (1-5), 6 to end, or 7 to go back: ");
        scanf_s(" %c", &choice);

        switch (choice) {
        case '1':
            printf("You selected 1.\n");
            return choice;
        case '2':
            printf("You selected 2.\n");
            return choice;
        case '3':
            printf("You selected 3.\n");
            return choice;
        case '4':
            printf("You selected 4.\n");
            return choice;
        case '5':
            printf("You selected 5.\n");
            return choice;
        case '6':
            printf("You selected 6. Ending Program\n");
            exit(0);
        case '7':
            printf("Going back to main menu.\n");
            return ' ';
        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    }
}

int main() {
    char choice;

    while (1) {
        printf("Enter a character (A-C): ");
        scanf_s(" %c", &choice);

        switch (choice) {
        case 'A':
        case 'a':
            choice = handleChoiceA();
            break;
        case 'B':
        case 'b':
            printf("You selected B.\n");
            return 0;
        case 'C':
        case 'c':
            printf("You selected C.\n");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
