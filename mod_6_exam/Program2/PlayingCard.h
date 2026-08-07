#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H
#include <iostream>
#include <string>

class PlayingCard
{
private: 
    std::string rank;
    std::string suit;
public:
    PlayingCard(std::string newRank, std::string newSuit);
    friend std::ostream& operator<<(std::ostream& ostream, const PlayingCard& card);
};
#endif