#include <stdio.h>

// Constants
#define STAGE_COUNT 5

// Function prototypes
void getInput(char stage[], int* population, float* progress);
void displayStats(char stages[][20], int populations[], float progresses[]);

int main() {
    char stages[STAGE_COUNT][20] = {
        "Cell", "Creature", "Tribal", "Civilization", "Space"
    };
    int populations[STAGE_COUNT];
    float progresses[STAGE_COUNT];

    printf("Welcome to SporeStats!\n\n");

    // Loop to get stats for each stage using the getInput function.
    for (int i = 0; i < STAGE_COUNT; i++) {
        getInput(stages[i], &populations[i], &progresses[i]);
    }

    // Display the stats using the displayStats function.
    displayStats(stages, populations, progresses);

    return 0;
}

// Function to get input for a particular stage.
void getInput(char stage[], int* population, float* progress) {
    printf("Enter stats for the %s stage:\n", stage);

    printf("Population: ");
    scanf_s("%d", population);

    printf("Progress (0 to 100): ");
    scanf_s("%f", progress);

    printf("\n");
}

// Function to display stats.
void displayStats(char stages[][20], int populations[], float progresses[]) {
    printf("Your Species Evolution Stats:\n");
    printf("-----------------------------\n");
    for (int i = 0; i < STAGE_COUNT; i++) {
        printf("%s Stage - Population: %d, Progress: %.2f%%\n", stages[i], populations[i], progresses[i]);
    }
}
