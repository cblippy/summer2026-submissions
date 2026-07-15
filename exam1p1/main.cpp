// Callie Sims -- Computer Science 2
// Summer 2026 Exam 1 Coding Portion
// 1. Time

#include "time.h"
#include <iostream>
using namespace std;

int main()
{
    Time Time1(02, 45, 15);
    Time Time2(14, 45, 15);

    Time1.printStandard();
    Time2.printMilitary();

    cout << "\n" << endl;

    Time2.printStandard();
    Time2.printMilitary();

    return 0;
}