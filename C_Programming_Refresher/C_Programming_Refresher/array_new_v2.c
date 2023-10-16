#include <stdio.h>
//https://youtu.be/WL1P6xiA_KY?si=Ex-ArlrfTXbfe3MD
int main() {
    int array[5];       // Declare an integer array 'array' with a size of 5 elements.
    array[2] = 5;       // Assign the value 5 to the element at index 2 of the 'array'.

    // Print the memory address of the 'array' using %zu. This prints the address of the first element.
    printf(" array: %zu\n", array);

    // Print the memory address of 'array + 1' using %zu. This represents the address of the second integer in the array.
    printf(" array + 1: %zu\n", array + 1);

    // Print the memory address of the 'array' variable itself using %zu. This represents the entire array.
    printf("&array: %zu\n", &array);

    // Print the memory address of '&array + 1' using %zu. This represents a pointer to the entire 'array' with 5 integer values.
    printf("&array + 1 : %zu\n", &array + 1);

    // 2D array
    int matrix[3][5] =
    {
        {0,1,2,3,4},
        {5,6,7,8,9},
        {10,11,12,13,14},
    };

    // Print the memory address of 'matrix[1]' using %zu. This represents the address of the second row in the 2D array.
    printf("      matrix[1]: %zu\n", matrix[1]);

    // Print the memory address of 'matrix[1] + 1' using %zu. This represents the address of the second element in the second row.
    printf("   matrix[1] + 1: %zu\n", matrix[1] + 1);

    // Print the value at 'matrix[1] + 3' using %zu. This prints the value at that address.
    printf("*(matrix[1] + 3): %zu\n\n", *(matrix[1] + 3));

    // Print the memory address of '&matrix[1] + 1' using %zu. This represents a pointer to the third row in the 2D array.
    printf("   &matrix[1] + 1: %zu\n", &matrix[1] + 1);

    // Print the memory address of '&matrix[1] + 1' using %zu. This represents a pointer to the third row in the 2D array.
    printf("&matrix[1] + 1: %zu\n", &matrix[1] + 1);

    // Print the value at '*(&matrix[1] + 1)' using %zu. This prints the value at that address.
    printf("*(&matrix[1] + 1): %zu\n", *(&matrix[1] + 1));

    // Pointer
    int* pointer = (int*)&matrix[1] + 1;

    // Print the memory address of 'pointer' using %zu. This represents the address stored in the 'pointer' variable.
    printf("pointer: %zu\n", pointer);

    // Print the value at '*pointer' using %zu. This prints the value at the address stored in the 'pointer' variable.
    printf("*pointer: %zu\n", *pointer);

    return 0;
}
