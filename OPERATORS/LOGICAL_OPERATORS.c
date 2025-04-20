#include <stdio.h>
#include <stdbool.h>

int main() {
int x = 10, y = 5, z = 15;

// AND operator
printf("AND Operator:\n");
if (x > 5 && y < 10) {
printf("Both conditions are True\n");  // True
}

// OR operator
printf("\nOR Operator:\n");
if (x < 5 || z > 10) {
printf("At least one condition is True\n");  // True
}

// NOT operator
printf("\nNOT Operator:\n");
bool is_logged_in = false;
if (!is_logged_in) {
printf("User is not logged in\n");  // True
}

// Combined logic
printf("\nCombined Logic:\n");
int age = 20;
bool has_ticket = true;
if (age >= 18 && has_ticket) {
printf("You can enter the concert!\n");  // True
}
else
{
printf("Entry not allowed.\n");
}

return 0;
}
