#include <iostream>
#include "DayTime.h"
#include <ctime>

using namespace std;

const DayTime& currentTime()
{
    // present time.
    static DayTime curTime;
    time_t sec; time(&sec); // Gets the present time.
    // Initializes the struct
    struct tm *time = localtime(&sec); // tm with it.
    curTime.setTime( time->tm_hour, time->tm_min,
                     time->tm_sec );
    return curTime;
}

int main()
{
    DayTime cinema(20,30);
    cout << "\\nThe movie starts at ";
    cinema.print();

    DayTime now(currentTime()); // Copy constructor
    cout << "\\nThe current time is ";
    now.print();
    cout << "\\nThe movie has ";
    if( cinema.isLess(now) )
        cout << "already begun!\\n" << endl;
    else
        cout << "not yet begun!\\n" << endl;
    return 0;
}
