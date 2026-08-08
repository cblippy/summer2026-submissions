#pragma once

#include "die.h"
#include <string>
using namespace std;

class Die;
class DiceHand
{
private:
    Die* dice;
    int size;
public:
    DiceHand();

    int getSize();
    void setSize(int newSize);

    string displayDieHand();

    void rollDie(int dieNum);
    void rollAllDice();
};