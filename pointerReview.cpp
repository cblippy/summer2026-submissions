// DA 1.1 Pointer Review Problems
// Callie Sims -- Computer Science II Summer 2026

#include <iostream>
#include <string>
using namespace std;

void displayNameAndAge(string* namePtr, int* agePtr);
void displayIntArray(int* nums, int size);
int* makeIntArray(int size);

int main()
{
    int age = 20;
    string name = "Callie";

    int* agePtr = &age;
    string* namePtr = &name;

    displayNameAndAge(namePtr, agePtr);




    int nums[5] = {10, 20, 30, 40, 50};
    displayIntArray(nums, 5);




    int size;

    cout << "How many numbers? " << endl;
    cin >> size;

    int* numbers = makeIntArray(size);
    displayIntArray(numbers, size);

    delete[] numbers;
    numbers = nullptr;
}

void displayNameAndAge(string* namePtr, int* agePtr)
    {
        cout << "Name: " << *namePtr << endl;
        cout << "Age: " << *agePtr << endl;
    }

void displayIntArray(int* nums, int size)
{
    cout << "Your numbers were: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(nums + i) << endl;
    }
}

int* makeIntArray(int size)
{
    int* numbers = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Give me an int: ";
        cin >> numbers[i];
    }
    return numbers;
}
