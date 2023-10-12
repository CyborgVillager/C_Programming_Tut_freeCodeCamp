#include <stdio.h>

void function() {
    static int i = 0;  // 'static' keyword ensures that the variable 'i' retains its value across function calls. It's initialized only once.
    i++;
    printf("%d\n", i);
}

int main() {
    function();  // Will print 1
    function();  // Will print 2
    function();  // Will print 3
    return 0;
}
