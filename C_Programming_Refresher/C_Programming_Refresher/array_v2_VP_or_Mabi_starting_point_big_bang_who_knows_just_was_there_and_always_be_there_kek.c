#include <stdio.h>
//Universe in Your Hands: https://www.youtube.com/watch?v=vQXDN-3tOpQ
int main() {
    char stages[5][20] = {
        "Cell", "Creature", "Tribal", "Civilization", "Space"
    };
    int population[5];  // Population at each stage.
    float progress[5];  // Progress percentage at each stage.

    printf("Welcome to SporeStats!\n\n");

    // Loop to get stats for each stage.
    for (int i = 0; i < 5; i++) {
        printf("Enter stats for the %s stage:\n", stages[i]);

        printf("Population: ");
        scanf_s("%d", &population[i]);

        printf("Progress (0 to 100): ");
        scanf_s("%f", &progress[i]);

        printf("\n");
    }

    // Display the collected stats.
    printf("Your Species Evolution Stats:\n");
    printf("-----------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%s Stage - Population: %d, Progress: %.2f%%\n", stages[i], population[i], progress[i]);
    }

    return 0;
}
