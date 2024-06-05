
// Program to convert temperature value from Fahrenheit to Celsius
#include <stdio.h>

int main() {
    int fahr, celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &fahr);

    celsius = 5 * (fahr - 32) / 9;
    printf("%d in Fahrenheit = %d in Celsius\n", fahr, celsius);

    return 0;
}
