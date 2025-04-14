// Static Variable: Retains its value between function calls; has a local scope but static lifetime.
#include <stdio.h>
void countCalls() {
    static int counter = 0;  // Static variable
    counter++;
    printf("Function called %d times\n", counter);
}
int main() {
    countCalls();
    countCalls();
    countCalls();
    return 0;
}

