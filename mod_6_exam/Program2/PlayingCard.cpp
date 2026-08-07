#include "PlayingCard.h"

PlayingCard::PlayingCard(std::string newRank, std::string newSuit)
{
    rank = newRank;
    suit = newSuit;
}

std::ostream& operator<<(std::ostream& ostream, const PlayingCard& card)
{
    ostream << card.rank << " of " << card.suit;
    return ostream;
}