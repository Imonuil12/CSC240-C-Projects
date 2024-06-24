//Wire.cpp
#include <iostream>
#include <iomanip>

using namespace std;

class Wire {
public:
    Wire();
    void Print();

    double voltage;
    double current;
};

Wire::Wire() {
    voltage = 0.0;
    current = 0.0;
}

void Wire::Print() {
    cout << "Wire's voltage: " << fixed << setprecision(1) << voltage << endl;
    cout << "Wire's current: " << fixed << setprecision(1) << current << endl;
}

int main() {
    double voltageValue;
    double currentValue;

    /* Additional variable declarations go here */
    Wire* myWire;

    cin >> voltageValue;
    cin >> currentValue;

    /* Your code goes here */
    myWire = new Wire();
    myWire->voltage = voltageValue;
    myWire->current = currentValue;

    myWire->Print();

    delete myWire;
}
