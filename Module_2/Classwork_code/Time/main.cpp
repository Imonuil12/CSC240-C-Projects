#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    Time t; // instantiate object t of class Time

    Time *p;
    p = new Time();

    cout << "static: The initial military time is ";
    t.printMilitary();
    cout << endl;

    cout << "static: The initial standard time is ";
    t.printStandard();
    cout << endl;

    t.setTime(15, 27);

    cout << "static: Military time after setTime is ";
    t.printMilitary();
    cout << endl;

    cout << "static: Standard time after setTime is ";
    t.printStandard();
    cout << endl;

    cout << "dynamic: The initial military time is ";
    p->printMilitary();
    cout << endl;

    cout << "dynamic: The initial standard time is ";
    p->printStandard();
    cout << endl;

    p->setTime(15, 27);

    cout << "dynamic: Military time after setTime is ";
    p->printMilitary();
    cout << endl;

    cout << "dynamic: Standard time after setTime is ";
    p->printStandard();
    cout << endl;

    delete p;

    return 0;
}
