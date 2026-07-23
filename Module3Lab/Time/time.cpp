#include "time.h"

Time::Time()
{
    days = 0;
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time::Time(int d, int h, int m, int s)
{
    days = d;
    hours = h;
    minutes = m;
    seconds = s;
    simplify();
}

Time::Time(int h, int m, int s)
{
    days = 0;
    hours = h;
    minutes = m;
    seconds = s;
    simplify();
}

Time::Time(int h, int m)
{
    days = 0;
    hours = h;
    minutes = m;
    seconds = 0;
    simplify();
}

int Time::getDays() const
{
    return days;
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

void Time::simplify()
{
    while (seconds >= 60)
    {
        seconds -= 60;
        minutes++;
    }

    while (seconds < 0)
    {
        seconds += 60;
        minutes--;
    }

    while (minutes >= 60)
    {
        minutes -= 60;
        hours++;
    }

    while (minutes < 0)
    {
        minutes += 60;
        hours--;
    }

    while (hours >= 24)
    {
        hours -= 24;
        days++;
    }

    while (hours < 0)
    {
        hours += 24;
        days--;
    }
}

Time Time::operator+(const Time& other) const
{
    Time temp;

    temp.days = days + other.days;
    temp.hours = hours + other.hours;
    temp.minutes = minutes + other.minutes;
    temp.seconds = seconds + other.seconds;

    temp.simplify();
    return temp;
}

Time Time::operator-(const Time& other) const
{
    Time temp;

    temp.days = days - other.days;
    temp.hours = hours - other.hours;
    temp.minutes = minutes - other.minutes;
    temp.seconds = seconds - other.seconds;

    temp.simplify();
    return temp;
}

bool Time::operator>(const Time& other) const
{
    return (int)*this > (int)other;
}

bool Time::operator<(const Time& other) const
{
    return (int)*this < (int)other;
}

bool Time::operator==(const Time& other) const
{
    return (int)*this == (int)other;
}

Time& Time::operator++()
{
    seconds++;
    simplify();
    return *this;
}

Time Time::operator++(int)
{
    Time temp = *this;
    seconds++;
    simplify();
    return temp;
}

Time& Time::operator--()
{
    seconds--;
    simplify();
    return *this;
}

Time Time::operator--(int)
{
    Time temp = *this;
    seconds--;
    simplify();
    return temp;
}

Time::operator int() const
{
    return (((days * 24) + hours) * 60 + minutes) * 60 + seconds;
}

ostream& operator<<(ostream& out, const Time& t)
{
    out << t.getDays() << " days "
        << t.getHours() << " hours "
        << t.getMinutes() << " minutes "
        << t.getSeconds() << " seconds.";
    return out;
}