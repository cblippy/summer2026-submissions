#include "game.h"
#include <iostream>
using namespace std;

Game::Game()
{
    numberOfCoins = 3;

    coins = new Coin[numberOfCoins]
    {
        Coin(5),
        Coin(10),
        Coin(25)
    };

    targetBalance = 100;
    totalScore = 0;
    rounds = 0;
}

Game::Game(double target)
{
    numberOfCoins = 3;

    coins = new Coin[numberOfCoins]
    {
        Coin(5),
        Coin(10),
        Coin(25)
    };

    targetBalance = target;
    totalScore = 0;
    rounds = 0;
}

Game::~Game()
{
    delete[] coins;
}


void Game::flipCoins()
{
    for (int i = 0; i < numberOfCoins; i++)
    {
        coins[i].flip();
    }
}


void Game::printFlipResults()
{
    cout << "Nickel: " << coins[0].getSideUp() << endl;
    cout << "Dime: " << coins[1].getSideUp() << endl;
    cout << "Quarter: " << coins[2].getSideUp() << endl;
}

void Game::printScore()
{
    cout << "Score: " << totalScore << " cents" << endl;
}

int Game::getRounds()
{
    return rounds;
}

int Game:: getScore()
{
    return totalScore;
}


void Game::playGame()
{
    while (totalScore < targetBalance)
    {
        flipCoins();
        printFlipResults();

        for (int i = 0; i < numberOfCoins; i++)
        {
            if (coins[i].isItHeads())
            {
                totalScore += coins[i].getCentValue();
            }
        }
        rounds++;
        printScore();
    }
    if (totalScore == targetBalance)
    {
        cout << "YOU WIN" << endl;
    }
    else
    {
        cout << "YOU LOSE" << endl;
    }

    cout << "Rounds played: " << rounds << endl;
}