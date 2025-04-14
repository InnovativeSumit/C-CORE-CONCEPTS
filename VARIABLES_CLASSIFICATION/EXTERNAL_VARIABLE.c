// External Variable: Defined in another file and accessed using the 'extern' keyword.
#include <stdio.h>
extern int externalVar=6;  // Declare external variable
void showExternal() {
    printf("External Variable: %d\n", externalVar);
}
int main() {
    showExternal();
    return 0;
}
