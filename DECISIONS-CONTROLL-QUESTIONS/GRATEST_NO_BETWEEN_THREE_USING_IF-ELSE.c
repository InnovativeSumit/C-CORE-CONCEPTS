#include <stdio.h>
int main() {
    int a, b, c;

    printf("Enter 1st numbers: ");
    scanf("%d",&a);
    printf("Enter 2nd numbers: ");
    scanf("%d",&b);
    printf("Enter 3rd numbers: ");
    scanf("%d",&c);

    if (a >= b && a >= c) {
        printf("%d is the greatest number.\n", a);
    }
    else if (b >= a && b >= c) {
        printf("%d is the greatest number.\n", b);
    }
    else {
        printf("%d is the greatest number.\n", c);
    }

    return 0;
}
