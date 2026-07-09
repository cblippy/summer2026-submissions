// DA 2.1 Classes
// Callie Sims -- Computer Science II Summer 2026

#pragma once

#include <string>
using namespace std;

class Die
{
private:
    int numberOfSides;
    int faceValue;
public:
    Die();

    int getNumberOfSides();
    int getFaceValue();

    void setNumberOfSides(int sides);
    void setFaceValue(int value);

    void roll();
    
    string getDescription();
};