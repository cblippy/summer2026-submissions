#ifndef CONSOLEUI_H
#define CONSOLEUI_H

#include <string>
using namespace std;

class ConsoleUI
{
    public:
        void displayDice(int dice[]);
        void displayMessage(string message);
        void getKeepDice(bool keepDice[]);
        int getCategoryChoice();
};
#endif