#include <stdio.h>

void function() {
    register int i;  // 'register' keyword hints the compiler to store 'i' in a CPU register for faster access. The compiler may or may not honor this request.
    for (i = 0; i < 10000; i++) {
        printf("%d\n", i);
    }
}

int main() {
    function();
    return 0;
}
