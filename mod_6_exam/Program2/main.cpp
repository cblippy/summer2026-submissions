#include "PlayingCard.h"
#include <iostream>
#include <string> 

template <class T>
void displayCard(T item)
{
    std::cout << "**************" << std::endl;
    std::cout << item << std::endl;
    std::cout << "**************" << std::endl;
}

int main()
{
    int number = 10;
    double decimal = 4.25;
    std::string word = "Card:";
    PlayingCard card ("King", "Hearts");

    displayCard(number);
    displayCard(decimal);
    displayCard(word);
    displayCard(card);
    return 0;
}