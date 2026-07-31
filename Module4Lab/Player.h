//Represents the player in the garden
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    string name;
public:
    Player();
    Player(string name);

    void setName(string name);
    string getName() const;

    void displayStatus() const;
};
#endif