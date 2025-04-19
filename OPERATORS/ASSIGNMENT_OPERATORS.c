//make by sumit
#include <stdio.h>
int main() {
int a = 10;
printf("Initial value of a: %d\n", a);

// 1. =  (Simple Assignment)
a = 5;
printf("a = 5     --> %d\n", a);

// 2. += (Add and Assign)
a += 3; // a = a + 3
printf("a += 3    --> %d\n", a);

// 3. -= (Subtract and Assign)
a -= 2; // a = a - 2
printf("a -= 2    --> %d\n", a);

// 4. *= (Multiply and Assign)
a *= 4; // a = a * 4
printf("a *= 4    --> %d\n", a);

// 5. /= (Divide and Assign)
a /= 2; // a = a / 2
printf("a /= 2    --> %d\n", a);

// 6. %= (Modulus and Assign)
a %= 3; // a = a % 3
printf("a %%= 3    --> %d\n", a);

    return 0;
}
