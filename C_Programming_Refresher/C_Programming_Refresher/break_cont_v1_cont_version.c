#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skips the rest of the loop for the current iteration when i is 5
        }
        printf("%d\n", i);
    }

    return 0;
}
