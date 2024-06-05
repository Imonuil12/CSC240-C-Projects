
// Program to count the number of digits in an integer
#include <stdio.h>

int DigitCount(int n) {
    // Base case
    if (n < 10)
        return 1;
    else
        return 1 + DigitCount(n / 10); // Divide input by 10
}

int main(void) {
    int num;
    int digits;

    scanf("%d", &num);
    digits = DigitCount(num);
    printf("%d", digits);

    return 0;
}
