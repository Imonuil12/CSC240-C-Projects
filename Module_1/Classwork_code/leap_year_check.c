
// Program to determine if input year is a leap year or not
#include <stdio.h>

int main() {
    int year;
    printf("Enter a 4 digit year: ");
    scanf("%d", &year);

    // Arithmetic operators: +, -, *, /, %
    // Relational operators: >, >=, <, <=
    // Equality operators: ==, !=
    // Logical operators: &&, ||

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);

    return 0;
}
