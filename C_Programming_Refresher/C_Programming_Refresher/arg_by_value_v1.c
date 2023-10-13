#include <stdio.h>

// Define a simple creature with some attributes.
typedef struct {
    int legs;
    int size;
    int speed;
} Creature;

// Function declarations
void evolveForLand(Creature creature);
void displayCreatureAttributes(const char* environment, Creature creature);

// Main function
int main() {
    Creature aquaticCreature = { 0, 5, 2 }; // A creature that starts in water (0 legs, size 5, speed 2)

    displayCreatureAttributes("Aquatic", aquaticCreature);

    // Now, let's evolve our creature for land and see how it changes.
    evolveForLand(aquaticCreature); // Passing the creature by value

    // Display the creature after attempting evolution - notice it doesn't actually change in main due to Call by Value.
    displayCreatureAttributes("Aquatic", aquaticCreature);

    return 0;
}

// Function to simulate evolution for land environment.
void evolveForLand(Creature creature) {
    creature.legs = 4; // The creature develops legs to move on land
    creature.size += 2; // It grows a bit larger
    creature.speed += 1; // And a bit faster

    // Displaying how the creature would look after evolving for land inside this function.
    displayCreatureAttributes("Land", creature);
}

// Helper function to display creature's attributes based on the environment.
void displayCreatureAttributes(const char* environment, Creature creature) {
    printf("In %s environment:\n", environment);
    printf("Legs: %d\n", creature.legs);
    printf("Size: %d\n", creature.size);
    printf("Speed: %d\n\n", creature.speed);
}
