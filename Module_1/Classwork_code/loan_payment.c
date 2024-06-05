
// Program to find the number of payments required to pay off a loan
#include <stdio.h>

int main(void) {
    double balance;
    double payment;
    double rate;
    int numPayments = 0;

    scanf("%lf", &balance);
    scanf("%lf", &payment);
    scanf("%lf", &rate);

    while (balance > 0) {
        balance = balance * (rate + 1.0);
        balance = balance - payment;
        ++numPayments;
    }

    printf("%d payment(s)\n", numPayments);

    // printf("%d payment(s)\n", numPayments);

    return 0;
}
