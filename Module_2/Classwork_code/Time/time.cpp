#include <iostream>
#include "Time.h"
using namespace std;

Time::Time() { hour = minute = 0; }

void Time::setTime(int h, int m) {
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::printMilitary() {
    cout << (hour < 10 ? "0" : "") << hour << ":"
         << (minute < 10 ? "0" : "") << minute; // add "0"
}

void Time::printStandard() {
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
         << (minute < 10 ? "0" : "") << minute
         << (hour < 12 ? " AM" : " PM");
}
