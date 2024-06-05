
// Pointers.c
// Introduction to pointers
#include <stdio.h>

int main() {
    int *ip; // ip is a pointer to an integer variable
    int x, y;

    ip = &x; // ip is the same as x
    *ip = 5; // same as x = 5;
    y = *ip; // same as y = x;

    printf("%d\n", y);

    *ip = *ip + 5; // same as x = x + 5;
    ip = &y; // ip is the same as y
    *ip = *ip - 2; // same as y = y - 2;

    printf("%d\n", y);
    return 0;
}
