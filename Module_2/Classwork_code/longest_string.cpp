
// Find the longer of two input strings
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2;
    string longest;

    getline(cin, str1);
    getline(cin, str2);

    // Initially assume the first string is longest.
    longest = str1;

    // Change "longest" if the second string has equal or greater length.
    if (str2.length() >= str1.length()) {
        longest = str2;
    }
    cout << longest << endl;

    return 0;
}
