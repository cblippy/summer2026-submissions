#ifndef COIN_H
#define COIN_H

#include <string>
using namespace std;

class Coin
{
private:
    bool isHeads;
    const int centValue;
public:
    Coin();
    Coin(int value);
    void flip();
    bool isItHeads() const;
    string getSideUp() const;
    int getCentValue() const;
}; 
#endif