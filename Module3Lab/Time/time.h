#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Time
{
private:
    int days;
    int hours;
    int minutes;
    int seconds;
    void simplify();
public:
    Time();
    Time(int d, int h, int m, int s);
    Time(int h, int m, int s);
    Time(int h, int m);

    int getDays() const;
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    Time operator+(const Time& other) const;
    Time operator-(const Time& other) const;

    bool operator>(const Time& other) const;
    bool operator<(const Time& other) const;
    bool operator==(const Time& other) const;

    Time& operator++();
    Time& operator--();

    Time operator++(int);
    Time operator--(int);

    operator int() const;
    friend ostream& operator<<(ostream& out, const Time& t);
};
#endif