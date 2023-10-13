#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define a constant for the number of previous attempts we'll track for feedback
#define HISTORY_SIZE 5  

// Structure for providing feedback based on how close the guess is to the actual number
typedef struct {
    int range;
    char* message;
} Feedback;

int main() {
    int number, guess, attempts = 0;  // Variables to store the actual number, user's guess, and number of attempts
    int difference, previousDifferences[HISTORY_SIZE] = { 0 };  // Variables to calculate and store differences between guesses and actual number

    // An array of feedback messages based on the difference between guess and actual number
    Feedback feedbacks[] = {
        {1, "You're almost touching it!"},
        {3, "Extremely close!"},
        {5, "You can feel the warmth!"},
        {10, "Very Hot!"},
        {20, "Hot!"},
        {30, "Warm!"},
        {40, "Neutral..."},
        {60, "Cooling down..."},
        {80, "Cold!"},
        {100, "Frozen!"}
    };
    int feedbackCount = sizeof(feedbacks) / sizeof(Feedback);  // Determine the number of feedback messages

    srand(time(0));  // Seed the random number generator
    number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    printf("Guess the Number (1 to 100):\n");

    do {
        printf("Enter your guess: ");
        scanf_s("%d", &guess);  // Get the user's guess
        attempts++;  // Increment the attempt counter

        difference = abs(guess - number);  // Calculate the difference between the guess and actual number

        // Shift previous differences for tracking feedback
        for (int i = 0; i < HISTORY_SIZE - 1; i++) {
            previousDifferences[i] = previousDifferences[i + 1];
        }
        // Store the current difference at the end of the tracking array
        previousDifferences[HISTORY_SIZE - 1] = difference;

        char* proximityFeedback = NULL;  // Variable to store the feedback message
        // Determine the appropriate feedback message based on the difference
        for (int i = 0; i < feedbackCount; i++) {
            if (difference <= feedbacks[i].range) {
                proximityFeedback = feedbacks[i].message;
                break;
            }
        }

        // Check if the user guessed correctly
        if (difference == 0) {
            printf("Congratulations! You've guessed the number in %d attempts.\n", attempts);
            break;
        }
        else {
            printf("%s\n", proximityFeedback);  // Print feedback about the proximity
            printf("You are approximately %d numbers away.\n", difference);  // Print how many numbers away the guess is

            // If this isn't the first attempt, provide feedback based on the guess trend
            if (attempts > 1) {
                int improved = 0, worsened = 0;  // Variables to track if guesses are getting closer or farther
                for (int i = 1; i < HISTORY_SIZE; i++) {
                    if (!previousDifferences[i]) continue;  // Skip uninitialized values
                    if (previousDifferences[i] > previousDifferences[i - 1]) worsened++;
                    else if (previousDifferences[i] < previousDifferences[i - 1]) improved++;
                }

                // Give feedback on the trend of the guesses
                if (improved && !worsened) {
                    printf("You're consistently getting closer!\n");
                }
                else if (worsened && !improved) {
                    printf("You're consistently moving away. Maybe think of a different strategy.\n");
                }
                else {
                    if (difference < previousDifferences[HISTORY_SIZE - 2]) {
                        printf("You're closer than the last guess!\n");
                    }
                    else {
                        printf("You're farther than the last guess.\n");
                    }
                }
            }
        }
    } while (guess != number);  // Continue until the correct guess is made

    return 0;
}
