#include <stdio.h>
int main() {
int a, b, c, greatest;
    printf("Enter 1st numbers: ");
    scanf("%d", &a);
    printf("Enter 2nd numbers: ");
    scanf("%d",&b);
    printf("Enter 3rd numbers: ");
    scanf("%d",&c);
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The greatest number is: %d\n", greatest);

    return 0;
}

