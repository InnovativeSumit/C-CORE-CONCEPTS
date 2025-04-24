#include <stdio.h>

int main() {
    int age;

    // Prompting the user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Decision control statements
    if (age < 13) {
        printf("You are a Child.\n");
    }
    else if (age >= 13 && age <= 19) {
        printf("You are a Teenager.\n");
    }
    else {
        printf("You are an Adult.\n");
    }

    return 0;
}

