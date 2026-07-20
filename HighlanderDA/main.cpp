#include "highlander.h"
#include "superIntArray.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    Highlander h1("Person");
    cout << Highlander::speak() << endl;
    cout << h1.status() << endl;

    Highlander h2("Another person");
    cout << Highlander::speak() << endl;
    cout << h2.status() << endl;

    int numbers[] = {5, 10, 15, 20};
    SuperIntArray s1(numbers, 4);

    s1.add(25);

    cout << s1.get(2) << endl;

    s1.change(2, 100);

    cout << s1.get(2) << endl;

    cout << SuperIntArray::getMax(numbers, 4) << endl;
    cout << SuperIntArray::getMin(numbers, 4) << endl;
    cout << SuperIntArray::getMean(numbers, 4) << endl;

    SuperIntArray s2 = s1;

    cout << s2.get(2) << endl;
}