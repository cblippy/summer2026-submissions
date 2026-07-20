#ifndef SUPERINTARRAY_H
#define SUPERINTARRAY_H
#include <vector>
using namespace std;

class SuperIntArray
{
private:
    int* nums;
    int numberOfNums;
public:
    SuperIntArray();
    SuperIntArray(int array[], int size);
    SuperIntArray(int num);
    SuperIntArray(vector<int> values);
    SuperIntArray(const SuperIntArray& other);
    ~SuperIntArray();

    int* getNums();
    void setNums(int array[], int size);
    void add(int num);
    int get(int index);
    void change(int index, int value);

    static int getMax(int nums[], int size);
    static int getMin(int nums[], int size);
    static double getMean(int nums[], int size);
};
#endif