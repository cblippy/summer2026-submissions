// DA 2.3 Adding Functionality to Die and DieHand
// Callie Sims -- COMPSCI II Summer 2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"
#include "diceHand.h"
#include "diceConsole.h"
using namespace std;

void testDiceHand()
{
    Die* dice = new Die[2];
    DiceHand hand(dice, 2);
    DiceConsole console;

    hand.rollAllDice();

    int choice = 1;

    while (choice == 1)
    {
        console.displayDice(dice, hand.getSize());

        choice = console.getUserChoice(
            "Enter 1 to re-roll or 2 to not re-roll: "
        );

        if (choice == 1)
        {
            hand.rollAllDice();
        }
    }
    console.displayDice(dice, hand.getSize());
}

int main()
{
    srand(time(0));
    testDiceHand();

    return 0;
}