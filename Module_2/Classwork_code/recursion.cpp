
// Recursive function called DrawTriangle() that outputs lines of '*'
// to form a right side up isosceles triangle. Assume the base length is always odd and
// Output 9 spaces before the first '*' on the first line for correct formatting.
#include <iostream>
using namespace std;

void DrawTriangle(int length) {
    int i;

    if (length > 1) {
        DrawTriangle(length - 2);
    }
    for (i = 0; i < (9 - length / 2); ++i) {
        cout << " "; // Leave correct margin before drawing '*'.
    }
    for (int i = 0; i < length; ++i) {
        cout << "*";
    }
    cout << "\n";
}

int main() {
    int baseLength;

    cin >> baseLength;
    DrawTriangle(baseLength);
    return 0;
}
