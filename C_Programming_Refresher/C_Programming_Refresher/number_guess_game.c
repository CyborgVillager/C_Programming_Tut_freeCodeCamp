#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed the random number generator using the current time

    int number = (rand() % 100) + 1; // Generate a random number between 1 and 100
    int guess;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it!\n");

    while (1) { // Infinite loop to keep asking for guesses until the user is correct
        printf("Enter your guess: ");
        scanf_s("%d", &guess); // Use scanf_s for safer input

        if (guess < number) {
            printf("Too low! Try a higher number.\n");
        }
        else if (guess > number) {
            printf("Too high! Try a lower number.\n");
        }
        else {
            printf("Congratulations! You guessed the number.\n");
            break; // Exit the loop when the user guesses correctly
        }
    }

    return 0;
}
