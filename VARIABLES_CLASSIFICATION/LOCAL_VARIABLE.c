// Local Variable: Declared inside a function/block and accessible only within that block.
#include <stdio.h>
void display() {
    int localVar = 5;  // Local variable
    printf("Local Variable: %d\n", localVar);
}
int main() {
    display();
    return 0;
}

