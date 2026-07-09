#include <iostream>
#include <ctime>

#include "die.h"
#include "diceHand.h"
using namespace std;

int main()
{
    srand(time(0));

    Die die1;
    Die die2;
    Die die3;

    die1.setNumberOfSides(6);
    die2.setNumberOfSides(6);
    die3.setNumberOfSides(6);

    die1.setFaceValue(2);
    die2.setFaceValue(4);
    die3.setFaceValue(6);

    cout << "Before rolling:\n";
    cout << die1.getDescription() << endl;
    cout << die2.getDescription() << endl;
    cout << die3.getDescription() << endl;

    die1.roll();
    die2.roll();
    die3.roll();

    cout << "After rolling:\n";
    cout << die1.getDescription() << endl;
    cout << die2.getDescription() << endl;
    cout << die3.getDescription() << endl;

    DiceHand hand;

    cout << "Starting hand:\n";
    cout << hand.displayDieHand();

    hand.rollAllDice();

    cout << "After rolling all dice:\n";
    cout << hand.displayDieHand();

    hand.rollDie(0);
    hand.rollDie(4);

    cout << "After rolling first and last die:\n";
    cout << hand.displayDieHand();

    return 0;
}