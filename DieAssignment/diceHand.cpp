#include "diceHand.h"
#include "die.h"
using namespace std;

DiceHand::DiceHand()
{
    size = 5;
    dice = new Die[size];
}


int DiceHand::getSize()
{
    return size;
}



void DiceHand::setSize(int newSize)
{
    size = newSize;
}


string DiceHand::displayDieHand()
{
    string result = " ";

    for (int i = 0; i < size; i++)
    {
        result += "Die ";
        result += to_string(i + 1);
        result += ": ";
        result += to_string(dice[i].getFaceValue());
        result += "\n";
    }

    return result;
}


void DiceHand::rollDie(int dieNum)
{
    if (dieNum >= 0 && dieNum < size)
    {
        dice[dieNum].roll();
    }
}

void DiceHand::rollAllDice()
{
    for (int i = 0; i < size; i++)
    {
        dice[i].roll();
    }
}