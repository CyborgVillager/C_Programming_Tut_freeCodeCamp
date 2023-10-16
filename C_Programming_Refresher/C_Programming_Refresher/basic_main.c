// main.c

#include <stdio.h>
#include "utils.h"

int main() {
    int result = add(5, 3); // Call the 'add' function from utils.c
    printf("Result: %d\n", result);
    return 0;
}
