#include "Player.h"

Player::Player()
{
    name = "";
}

Player::Player(string name)
{
    this->name = name;
}

void Player::setName(string name)
{
    this->name = name;
}

string Player::getName() const
{
    return name;
}

void Player::displayStatus() const
{
    cout << "Player: " << name << endl;
}