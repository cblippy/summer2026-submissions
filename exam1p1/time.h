#ifndef TIME_H
#define TIME_H

class Time
{
private: 
    int hours;
    int minutes;
    int seconds;
public: 
    Time();
    Time(int h, int m, int s);
    ~Time();

    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    void setHours(int h);
    void setMinutes(int m);
    void setSeconds(int s);

    void printStandard() const;
    void printMilitary() const;
};
#endif