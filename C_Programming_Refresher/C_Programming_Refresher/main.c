#include <stdio.h>

extern int globalVariable;  // 'extern' keyword indicates that 'globalVariable' is declared here but defined elsewhere.
extern void function();     // Similarly, 'function' is declared here but defined in another source file.

int main() {
    function();
    printf("%d\n", globalVariable);
    return 0;
}
