#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // For exit() function

// Function to demonstrate prompting the user for a password until they enter the correct one
void checkPassword() {
    char password[100];
    const char correctPassword[] = "secret123";  // The predefined correct password
    int attempts = 3;  // Define the maximum attempts allowed

    // This loop keeps prompting the user until the correct password is provided or the attempts are exhausted.
    do {
        printf("Enter the password (You have %d attempt%s left): ", attempts, (attempts > 1 ? "s" : ""));
        scanf_s("%99s", password, (unsigned)_countof(password));  // Securely read user input with a length specifier

        attempts--;  // Decrement the number of attempts

        if (strcmp(password, correctPassword) == 0) {
            printf("Access granted!\n");  // Notify the user that the password is correct
            return;  // Exit the function if the password is correct
        }
        else if (attempts == 0) {
            printf("No attempts left. Program will close.\n");
            exit(0);  // Close the program if no attempts left
        }
        else {
            printf("Incorrect password. Try again.\n");
        }
    } while (attempts > 0);
}

// Function to display a simple menu until the user chooses to exit
void displayMenu() {
    int choice;

    // This loop displays a menu and keeps doing so until the user selects the exit option.
    do {
        printf("\nMenu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        // Execute appropriate action based on user's choice
        switch (choice) {
        case 1:
            printf("You chose Option 1.\n");
            break;
        case 2:
            printf("You chose Option 2.\n");
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");  // Notify user of an invalid selection
        }
    } while (choice != 3);  // Keep displaying menu until 'Exit' option is chosen
}

// Function to prompt the user to enter a positive number
void getPositiveNumber() {
    int number;

    // This loop keeps asking the user for a positive number.
    do {
        printf("Enter a positive number: ");
        scanf_s("%d", &number);

        // Provide feedback if the number is not positive
        if (number <= 0) {
            printf("Please enter a positive number.\n");
        }
    } while (number <= 0);  // Check if the entered number is positive

    printf("You entered: %d\n", number);  // Display the entered positive number
}

int main() {
    checkPassword();
    displayMenu();
    getPositiveNumber();
    return 0;
}
