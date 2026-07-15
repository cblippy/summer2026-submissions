#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "die.h"

class GameLogic
{
    private: 
        Die dice[5];
        int scores[6];
        bool categoriesUsed[6];
    public: 
        GameLogic();
        void rollDice();
        void rollSelectedDice(bool keepDice[]);
        int getDieValue(int index);
        int calculateScore(int category);
        void addScore(int category);
        bool categoryUsed(int category);
        int getTotalScore();
};
#endif