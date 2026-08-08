#ifndef EATEROF_H
#define EATEROF_H
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class EaterOf
{
private:
    T sum;
public:
    EaterOf();
    void eat(T food);
    T burp();
};

template <typename T>
EaterOf<T>::EaterOf()
{
    sum = T();
}

template <typename T>
void EaterOf<T>::eat(T food)
{
    cout << "nom-nom" << endl;
    sum = sum + food;
}

template <typename T>
T EaterOf<T>::burp()
{
    return sum;
}
#endif