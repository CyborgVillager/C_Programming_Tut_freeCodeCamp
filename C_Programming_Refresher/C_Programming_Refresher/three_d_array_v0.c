#include <stdio.h>

int main() {
    // Declare and initialize a 3D array with dimensions 2x3x4
    int cube[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Access and print elements of the 3D array
    printf("3D Array elements:\n");
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 4; z++) {
                printf("%d ", cube[x][y][z]);
            }
            printf("\n"); // Move to the next row in the 3rd dimension
        }
        printf("\n"); // Add a blank line to separate the 2nd dimension
    }

    return 0;
}
