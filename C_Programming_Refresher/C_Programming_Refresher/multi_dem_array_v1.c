#include <stdio.h>

int main()
{
    // 2D array = an array where each element is an entire array
    // Good for needing a matrix, grid, or table of data

    // Example of initializing a 2D array
    int numbers[3][3];

    // Determine the number of rows and columns in the 2D array
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    printf("rows: %d\ncolumns: %d\n", rows, columns);

    // Manually populate the elements of the 2D array
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    // Nested Loops to print the elements of the 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
