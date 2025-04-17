#include <stdio.h>
int main() {
int a,b;
printf("Enter the 1st number: ");
scanf("%d",&a);
printf("Enter the 2nd number: ");
scanf("%d",&b);
// Equal to (==)
printf("%d == %d is %d\n",a,b,a==b);  // 0 (false)

// Not equal to (!=)
printf("%d != %d is %d\n",a,b,a!= b);  // 1 (true)

// Greater than (>)
printf("%d > %d is %d\n",a,b,a>b);    // 0 (false)

// Less than (<)
printf("%d < %d is %d\n",a,b,a<b);    // 1 (true)

// Greater than or equal to (>=)
printf("%d >= %d is %d\n",a,b,a>= b);  // 0 (false)

// Less than or equal to (<=)
printf("%d <= %d is %d\n", a, b,a<= b);  // 1 (true)

return 0;
}
