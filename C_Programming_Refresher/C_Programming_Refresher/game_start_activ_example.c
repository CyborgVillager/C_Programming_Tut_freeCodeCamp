#include <stdio.h>
#include <stdbool.h>

// Function to select game difficulty after character creation
int selectDifficulty() {
    int difficulty;
    do {
        // Displaying difficulty options to the user
        printf("\nSelect Game Difficulty:\n");
        printf("1. Easy\n");
        printf("2. Normal\n");
        printf("3. Hard\n");
        printf("Select difficulty: ");
        scanf_s("%d", &difficulty);

        // Checking if the user input is within valid range
        if (difficulty < 1 || difficulty > 3) {
            printf("Invalid choice! Please select a number between 1 and 3.\n");
        }
        else {
            return difficulty; // Return the selected difficulty
        }
    } while (true); // Keep looping until a valid difficulty is selected
}

// Function to guide the player through character creation
void createCharacter() {
    int gender, species, head, face, body, classChoice;

    // Prompting the user to select a gender for their character
    printf("\nSelect Gender:\n");
    printf("1. Male\n");
    printf("2. Female\n");
    printf("Select gender (1/2): ");
    scanf_s("%d", &gender);

    // Allowing the user to choose a species for their character
    printf("\nSelect Species:\n");
    printf("1. Human\n");
    printf("2. Dwarf\n");
    printf("3. Elf\n");
    printf("Select species (1/2/3): ");
    scanf_s("%d", &species);

    // Customizing the character's appearance based on user input
    printf("\nSelect Head (1/2/3): ");
    scanf_s("%d", &head);
    printf("Select Face (1/2/3): ");
    scanf_s("%d", &face);
    printf("Select Body (1/2/3): ");
    scanf_s("%d", &body);

    // Allowing the user to select a class for their character
    printf("\nSelect Class:\n");
    printf("1. Warrior\n");
    printf("2. Mage\n");
    printf("3. Thief\n");
    printf("4. Paladin\n");
    printf("5. Archer\n");
    printf("6. Sorcerer\n");
    printf("Select class (1-6): ");
    scanf_s("%d", &classChoice);

    // Displaying attributes based on the chosen class
    switch (classChoice) {
    case 1:
        printf("Strength: 10, Defense: 10\n");
        break;
    case 2:
        printf("Magic: 10, Wisdom: 10\n");
        break;
        //... You can continue logic for other classes here ...
    default:
        printf("Invalid class choice.\n");
        return;
    }

    // Allocating skill points based on user input
    int skillPoints = 10;
    while (skillPoints > 0) {
        int attribute;
        printf("\nYou have %d skill points left.\n", skillPoints);
        printf("Allocate to:\n");
        printf("1. Strength\n");
        printf("2. Magic\n");
        //... Continue displaying attributes here...
        printf("Select attribute to allocate points (1-10): ");
        scanf_s("%d", &attribute);

        // Decrement skill points as they are allocated
        skillPoints--;
    }
    int difficulty = selectDifficulty();
    printf("You selected difficulty: %d\n", difficulty);
}

void menu() {
    while (true) {
        int choice;
        // Main game menu
        printf("\nGame Menu:\n");
        printf("1. New Game\n");
        printf("2. Load Game\n");
        printf("3. Settings\n");
        printf("4. Credits\n");
        printf("5. Exit\n");
        printf("Select option: ");
        scanf_s("%d", &choice);
        switch (choice) {
        case 1:
            // Start a new game with character creation
            createCharacter();
            break;
        case 2:
            // Place to insert logic to load a saved game
            break;
        case 3:
            // Place to insert logic to adjust game settings
            break;
        case 4:
            // Display game credits or about section
            break;
        case 5:
            return; // Exit the game
        default:
            printf("Invalid choice. Please select again.\n");
            break;
        }
    }
}

int main() {
    menu();  // Begin with the main game menu
    return 0;
}
