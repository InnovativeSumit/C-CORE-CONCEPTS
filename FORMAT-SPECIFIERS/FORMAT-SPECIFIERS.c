#include <stdio.h>
int main() {
int i = 42;
float f = 3.1415;
double d = 2.718281828;
char c = 'A';
char str[] = "Hello";

// Integer
printf("Integer        : %d\n", i);     // 42

// Float
printf("Float (2 dp)   : %.2f\n", f);   // 3.14

// Double
printf("Double (5 dp)  : %.5lf\n", d);  // 2.71828

// Character
printf("Character      : %c\n", c);     // A

// String
printf("String         : %s\n", str);   // Hello

// Hexadecimal
printf("Hexadecimal    : %x\n", i);     // 2a

// Octal
printf("Octal          : %o\n", i);     // 52

// Unsigned
printf("Unsigned int   : %u\n", i);     // 42

return 0;
}
