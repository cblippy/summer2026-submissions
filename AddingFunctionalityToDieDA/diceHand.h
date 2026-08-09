#pragma once
#include "die.h"
#include <string>
using namespace std;

class DiceHand
{
private:
    Die* dice;
    int size;
public:
    DiceHand();
    DiceHand(Die* newDice, int newSize);
    ~DiceHand();

    int getSize();
    void setSize(int newSize);

    string displayDieHand();
    void rollDie(int dieNum);
    void rollAllDice();
};