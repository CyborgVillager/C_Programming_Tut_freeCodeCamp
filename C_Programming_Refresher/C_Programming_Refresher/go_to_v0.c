#include <stdio.h>

int main() {
    int count = 0;

start:
    if (count < 5) {
        printf("This is iteration %d\n", count);
        count++;
        goto start;
    }

    printf("Done with the loop!\n");
    return 0;
}
