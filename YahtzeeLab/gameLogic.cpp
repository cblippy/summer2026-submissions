#include "gameLogic.h"

GameLogic::GameLogic()
{
    for (int i = 0; i < 6; i++)
    {
        scores[i] = 0;
        categoriesUsed[i] = false;
    }
}

void GameLogic::rollDice()
{
    for (int i = 0; i < 5; i++)
    {
        dice[i].roll();
    }
}

void GameLogic::rollSelectedDice(bool keepDice[])
{
    for (int i = 0; i < 5; i++)
    {
        if (keepDice[i] == false)
        {
            dice[i].roll();
        }
    }
}

int GameLogic::getDieValue(int index)
{
    return dice[index].getFaceValue();
}

int GameLogic::calculateScore(int category)
{
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        if (dice[i].getFaceValue() == category)
        {
            total += category;
        }
    }

    return total;
}

void GameLogic::addScore(int category)
{
    scores[category - 1] = calculateScore(category);
    categoriesUsed[category - 1] = true;
}

bool GameLogic::categoryUsed(int category)
{
    return categoriesUsed[category - 1];
}

int GameLogic::getTotalScore()
{
    int total = 0;

    for (int i = 0; i < 6; i++)
    {
        total += scores[i];
    }

    return total;
}