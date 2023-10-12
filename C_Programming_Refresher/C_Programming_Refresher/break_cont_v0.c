#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Breaks out of the loop when i is 5
        }
        printf("%d\n", i);
    }

    return 0;
}
