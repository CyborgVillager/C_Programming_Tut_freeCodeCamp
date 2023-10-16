#include <stdio.h>

int main() {
    // Declare and initialize a 2D array with 3 rows and 4 columns
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Access and print elements of the 2D array
    printf("Matrix elements:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
