#include "time.h"
#include <iostream>
using namespace std;

Time::Time()
{
    hours = 0;
    minutes = 0;
    seconds = 0;
}


Time::Time(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}


Time::~Time()
{
}


int Time::getHours() const
{
    return hours;
}

int Time::getMinutes() const
{
    return minutes;
}

int Time::getSeconds() const
{
    return seconds;
}


void Time::setHours(int h)
{
    hours = h;
}

void Time::setMinutes(int m)
{
    minutes = m;
}

void Time::setSeconds(int s)
{
    seconds = s;
}


void Time::printStandard() const
{
    cout << "printStandard -- ";

    int displayHour = hours;
    string amPM = "AM";

    if (hours == 0)
    {
        displayHour = 12;
    }
    else if (hours == 12)
    {
        string amPM = "PM";
    }
    else if (hours > 12)
    {
        displayHour = hours - 12;
        string amPM = "PM";
    }
    if (displayHour < 10)
        cout << "0";

    cout << displayHour << ":";

    if (minutes < 10)
        cout << "0";
    
    cout << minutes << ":";

    if (seconds < 10)
        cout << "0";
    
    cout << seconds << " " << amPM << endl;
}


void Time::printMilitary() const
{
    cout << "printMilitary -- ";
    
    if (hours < 10) 
        cout << "0";

    cout << hours << ":";

    if (minutes < 10)
        cout << "0";

    cout << minutes << ":";

    if (seconds < 10)
        cout << "0";
    
    cout << seconds << ":";
}