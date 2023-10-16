#include <stdio.h>

// This function simulates the aging of a character or entity in a game.
int age_function(int character_age_days) {
    static int in_game_age_years = 0; // Static variable to keep track of in-game age in years
    int in_game_age_days = 365; // Number of days per in-game year

    in_game_age_years += character_age_days / in_game_age_days; // Increment in-game years based on character's days

    return in_game_age_years;
}

int main() {
    int character_age_days = 730; // Character's age in days

    // Get the character's age in in-game years
    int character_age_in_game_years = age_function(character_age_days);

    // Print a descriptive message about the character's age
    printf("Character's Age: %d days\n", character_age_days);
    printf("Character's In-Game Age: %d years\n", character_age_in_game_years);

    return 0;
}
