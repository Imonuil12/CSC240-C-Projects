
// Write a program whose input is two integers, and whose output is the first integer
// and subsequent increments of 5 as long as the value is less than or equal to the second integer
#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int i;

    cin >> num1;
    cin >> num2;

    if (num2 < num1) {
        cout << "Second integer can't be less than the first." << endl;
    } else {
        for (i = num1; i <= num2; i = i + 5) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
