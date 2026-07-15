#ifndef GAME_H
#define GAME_H
#include "coin.h"

class Game
{
private:
    Coin* coins;
    double targetBalance;
    int numberOfCoins;
    int totalScore;
    int rounds;
    void flipCoins();
    void printFlipResults();
public:
    Game();
    Game(double target);
    ~Game();
    void printScore();
    int getRounds();
    int getScore();
    void playGame();
};
#endif