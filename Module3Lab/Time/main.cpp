#include <iostream>
#include "time.h"
using namespace std;

void assignmentTest();
void testTimeAddition();
void testTimeSubtraction();
void testPrePlus();
void testPreMinus();
void testPostPlus();
void testPostMinus();
void testTimeRelationalOperators();
void testTimeOutStreamOperator();
void testTimeIntegerConversion();

int main()
{
    assignmentTest();
    testTimeAddition();
    testTimeSubtraction();
    testPrePlus();
    testPreMinus();
    testPostPlus();
    testPostMinus();
    testTimeRelationalOperators();
    testTimeOutStreamOperator();
    testTimeIntegerConversion();
    return 0;
}

void assignmentTest()
{
    Time first(1, 2, 30, 45);
    Time second;

    second = first;

    cout << "First: " << first << endl;
    cout << "Second: " << second << "\n" << endl;
}

void testTimeAddition()
{
    Time first(0, 23, 50, 40);
    Time second(0, 2, 15, 30);

    Time answer = first + second;

    cout << "First: " << first << endl;
    cout << "Second: " << second << endl;
    cout << "Sum: " << answer << "\n" << endl;
}

void testTimeSubtraction()
{
    Time first(2, 3, 20, 15);
    Time second(1, 5, 40, 50);

    Time answer = first - second;

    cout << "First: " << first << endl;
    cout << "Second: " << second << endl;
    cout << "Difference: " << answer << "\n" << endl;
}

void testPrePlus()
{
    Time time(0, 23, 59, 59);

    cout << "Before: " << time << endl;

    ++time;

    cout << "After: " << time << "\n" << endl;
}

void testPreMinus()
{
    Time time(1, 0, 0, 0);

    cout << "Before: " << time << endl;

    --time;

    cout << "After: " << time << "\n" << endl;
}

void testPostPlus()
{
    Time time(0, 23, 59, 59);

    Time old = time++;

    cout << "Returned: " << old << endl;
    cout << "Current: " << time << "\n" << endl;
}

void testPostMinus()
{
    Time time(1, 0, 0, 0);

    Time old = time--;

    cout << "Returned: " << old << endl;
    cout << "Current: " << time << "\n" << endl;
}

void testTimeRelationalOperators()
{
    Time first(1, 5, 30, 0);
    Time second(0, 23, 59, 59);

    cout << (first > second) << endl;
    cout << (first < second) << endl;
    cout << (first == second) << "\n" << endl;
}

void testTimeOutStreamOperator()
{
    Time time(3, 12, 45, 10);

    cout << time << "\n" << endl;
}

void testTimeIntegerConversion()
{
    Time time(1, 2, 3, 4);

    int seconds = time;

    cout << "Time: " << time << endl;
    cout << "Seconds: " << seconds << endl;
}