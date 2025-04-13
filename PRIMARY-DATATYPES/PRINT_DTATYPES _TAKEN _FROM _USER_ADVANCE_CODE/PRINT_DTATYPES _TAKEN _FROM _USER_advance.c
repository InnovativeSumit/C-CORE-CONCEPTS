#include <stdio.h>
#define type_of(x) _Generic((x),\
    int: "int", \
    float: "float", \
    double: "double", \
    char: "char", \
    char *: "string", \
    default: "unknown")
int main() {
    int a;
    double b;
    char c;
    float d;

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("You entered: %d, Type: %s\n\n", a, type_of(a));


    printf("Enter a double: ");
    scanf("%lf", &b);
    printf("You entered: %.2lf, Type: %s\n\n", b, type_of(b));


    printf("Enter a character: ");
    scanf(" %c", &c);  // space before %c to consume leftover newline
    printf("You entered: %c, Type: %s\n\n", c, type_of(c));


    printf("Enter a float: ");
    scanf("%f", &d);  // reads a single word
    printf("You entered: %.2f, Type: %s\n\n", d, type_of(d));

    return 0;
}
