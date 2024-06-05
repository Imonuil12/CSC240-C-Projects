
// pointers.c
// Program to understand address arithmetic in C
#include <stdio.h>

int main() {
    char *s = "Hello, World!";
    char a[10];
    char *p = s;

    while (*p != '\0') {
        p++;
    }

    printf("The length of the string is %ld\n", p - s);

    // Since p and a point to the same array, we can also use relational operators <, <=, etc.
    // Such as if (p < q)
    // Also, pointers can be added or subtracted with integers. No other arithmetic operations are allowed.
    // Refer to page 87 (end of section 5.4 for more information)

    return 0;
}
