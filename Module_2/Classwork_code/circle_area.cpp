#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double area, circuit, radius=1.5;

    cout << "Please enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;
    circuit = 2 * PI * radius;

    cout << "\n To Evaluate a circle\n" << endl;

    cout << "Radius: " << radius << endl
        << "Circumference: " << circuit << endl
        << "Area: " << area << endl;
    return 0;
}   