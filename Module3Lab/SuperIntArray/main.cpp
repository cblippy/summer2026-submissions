#include "superIntArray.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numbers[] = {5, 10, 15, 20};

    SuperIntArray s1(numbers, 4);

    cout << "Original array: ";
    cout << s1 << endl;

    s1.add(25);

    cout << "After add: ";
    cout << s1 << endl;

    cout << "Value of index 2: ";
    cout << s1.get(2) << endl;

    s1.change(2, 100);

    cout << "After changing index 2: ";
    cout << s1 << endl;

    SuperIntArray s2(s1);

    cout << "Copy constructor: ";
    cout << s2 << endl;

    SuperIntArray s3;

    s3 = s1;

    cout << "Assignment operator: ";
    cout << s3 << endl;

    SuperIntArray s4 = s1 + s2;

    cout << "Added arrays: ";
    cout << s4 << endl;

    cout << "Using the [] operator: ";
    cout << s1[1] << endl;


    s1[1] = 50;

    cout << "After change using the []: ";
    cout << s1 << endl;

    cout << "Max: ";
    cout << SuperIntArray::getMax(numbers, 4) << endl;

    cout << "Min: ";
    cout << SuperIntArray::getMin(numbers, 4) << endl;

    cout << "Mean: ";
    cout << SuperIntArray::getMean(numbers, 4) << endl;
}