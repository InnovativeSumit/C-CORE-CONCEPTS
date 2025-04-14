// Global Variable: Declared outside all functions and accessible throughout the program.
#include <stdio.h>
int globalVar = 10;  // Global variable
void show() {
    printf("Global Variable: %d\n", globalVar);
}
int main() {
    show();
    return 0;
}
