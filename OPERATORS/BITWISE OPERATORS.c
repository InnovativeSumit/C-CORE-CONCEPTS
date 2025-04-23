#include <stdio.h>
int main() {
int a = 10; // binary: 1010
int b = 4;  // binary: 0100

printf("a = %d\n", a);
printf("b = %d\n", b);

// Bitwise AND
printf("a & b = %d\n", a & b);

// Bitwise OR
printf("a | b = %d\n", a | b);

// Bitwise XOR
printf("a ^ b = %d\n", a ^ b);

// Bitwise NOT
printf("~a = %d\n", ~a);
printf("~b = %d\n", ~b);

// Left Shift
printf("a << 1 = %d\n", a << 1);
printf("b << 2 = %d\n", b << 2);

// Right Shift
printf("a >> 1 = %d\n", a >> 1);
printf("b >> 2 = %d\n", b >> 2);
return 0;
}
