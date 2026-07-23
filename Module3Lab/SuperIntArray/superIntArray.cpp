#include "superIntArray.h"

SuperIntArray::SuperIntArray()
{
    numberOfNums = 0;
    nums = nullptr;
}

SuperIntArray::SuperIntArray(int array[], int size)
{
    numberOfNums = size;
    nums = new int[numberOfNums];

    for (int i = 0; i < numberOfNums; i++)
    {
        nums[i] = array[i];
    }
}

SuperIntArray::SuperIntArray(int num)
{
    numberOfNums = 1;
    nums = new int[1];

    nums[0] = num;
}

SuperIntArray::SuperIntArray(vector<int> values)
{
    numberOfNums = values.size();
    nums = new int[numberOfNums];

    for (int i = 0; i < numberOfNums; i++)
    {
        nums[i] = values[i];
    }
}

SuperIntArray::SuperIntArray(const SuperIntArray &arr)
{
    numberOfNums = arr.numberOfNums;

    nums = new int[numberOfNums];
    for (int i = 0; i < numberOfNums; i++)
    {
        nums[i] = arr.nums[i];
    }
}

SuperIntArray::~SuperIntArray()
{
    delete[] nums;
}

int* SuperIntArray::getNums()
{
    return nums;
}

void SuperIntArray::setNums(int array[], int size)
{
    delete[] nums;

    numberOfNums = size;
    nums = new int[numberOfNums];

    for (int i = 0; i < numberOfNums; i++)
    {
        nums[i] = array[i];
    }
}

void SuperIntArray::add(int num)
{
    int* temp = new int[numberOfNums + 1];

    for (int i = 0; i < numberOfNums; i++)
    {
        temp[i] = nums[i];
    }

    temp[numberOfNums] = num;
    delete[] nums;

    nums = temp;
    numberOfNums++;
}

int SuperIntArray::get(int index)
{
    return nums[index];
}

void SuperIntArray::change(int index, int value)
{
    nums[index] = value;
}

SuperIntArray& SuperIntArray::operator=(SuperIntArray& right)
{
    if (this != &right)
    {
        delete[] nums;

        numberOfNums = right.numberOfNums;

        nums = new int[numberOfNums];

        for (int i = 0; i < numberOfNums; i++)
        {
            nums[i] = right.nums[i];
        }
    }
    return *this;
}

SuperIntArray SuperIntArray::operator+(SuperIntArray& right)
{
    SuperIntArray temp;

    temp.numberOfNums = numberOfNums + right.numberOfNums;

    delete[] temp.nums;
    temp.nums = new int[temp.numberOfNums];

    for (int i = 0; i < numberOfNums; i++)
    {
        temp.nums[i] = nums[i];
    }

    for (int i = 0; i < right.numberOfNums; i++)
    {
        temp.nums[numberOfNums + i] = right.nums[i];
    }
    return temp;
}

int& SuperIntArray::operator[](int index)
{
    return nums[index];
}

ostream& operator<<(ostream& stream, SuperIntArray& right)
{
    stream << "[";

    for (int i = 0; i < right.numberOfNums; i++)
    {
        stream << right.nums[i];

        if (i < right.numberOfNums - 1)
        {
            stream << ", ";
        }
    }
    stream << "]";

    return stream;
}

int SuperIntArray::getMax(int nums[], int size)
{
    int max = nums[0];

    for (int i = 1; i < size; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}

int SuperIntArray::getMin(int nums[], int size)
{
    int min = nums[0];

    for (int i = 1; i < size; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    return min;
}

double SuperIntArray::getMean(int nums[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += nums[i];
    }
    return (double)total / size;
}