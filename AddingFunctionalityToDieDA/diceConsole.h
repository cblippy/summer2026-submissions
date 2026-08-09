#pragma once
#include "die.h"
#include <string>
using namespace std;

class DiceConsole
{
public:
    void displayDie(Die* die);
    void displayDice(Die* dice, int size);
    int getUserChoice(string menu);
};