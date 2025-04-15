#include <stdio.h>
int main() {
    // \n - New line
    printf("This is the first line.\nThis is the second line.\n");

    // \t - Horizontal tab
    printf("Column1\tColumn2\tColumn3\n");

    // \\ - Backslash
    printf("This is a backslash: \\\n");

    // \" - Double quote
    printf("He said, \"Hello World!\"\n");

    // \' - Single quote
    printf("It\'s a good day.\n");

    // \a - Alert (bell sound)
    printf("This will make a beep sound (if supported): \a\n");

    // \b - Backspace
    printf("Hello\b World\n");  // Will remove the 'o' from "Hello"

    // \r - Carriage return
    printf("Carriage return test: Hello\rWorld\n");  // "Worldo"

    // \f - Form feed (not very visible in modern terminals)
    printf("Form feed\fNew page?\n");

    // \v - Vertical tab (rarely used)
    printf("Vertical tab\vCheck spacing\n");

    return 0;
}
