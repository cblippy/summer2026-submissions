#include "gameLogic.h"
#include "consoleUI.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    GameLogic game;
    ConsoleUI ui;

    int totalScore = 0;
    
    for (int category = 1; category <= 6; category++)
    {
        cout << "Category: " << category << endl;

        bool keepDice[5] = {false, false, false, false, false};

        for (int roll = 1; roll <= 3; roll++)
        {
            cout << "Roll: " << roll << endl;

            if (roll == 1)
            {
                game.rollDice();
            }
            else
            {
                game.rollSelectedDice(keepDice);
            }
            int diceValues[5];

            for (int i = 0; i < 5; i++)
            {
                diceValues[i] = game.getDieValue(i);
            }
            ui.displayDice(diceValues);

            if (roll < 3)
            {
                ui.getKeepDice(keepDice);
            }
        }
        int choice = ui.getCategoryChoice();
        int score = game.calculateScore(choice);
        game.addScore(choice);

        cout << "You scored " << score << " points." << endl;
    }
    totalScore = game.getTotalScore();

    cout << "\nFinal Score: " << totalScore << endl;
}