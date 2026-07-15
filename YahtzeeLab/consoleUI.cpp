#include "consoleUI.h"
#include <iostream>
using namespace std;

void ConsoleUI::displayDice(int dice[])
{
    cout << "Dice: ";

    for (int i = 0; i < 5; i++)
    {
        cout << dice[i] << " ";
    }
}

void ConsoleUI::displayMessage(string message)
{
    cout << message << endl;
}

void ConsoleUI::getKeepDice(bool keepDice[])
{
    int choice;

    for (int i = 0; i < 5; i++)
    {
        cout << "Keep die " << i + 1 << "?";
        cin >> choice;

        if (choice == 1)
        {
            keepDice[i] = true;
        }
        else
        {
            keepDice[i] = false;
        }
    }
}

int ConsoleUI::getCategoryChoice()
{
    int choice;

    cout << "Choose category to score: " << endl;
    cout << "1: ones" << endl;
    cout << "2: twos" << endl;
    cout << "3: threes" << endl;
    cout << "4: fours" << endl;
    cout << "5: fives" << endl;
    cout << "6: sixes" << endl;
    cin >> choice;
    return choice;
}