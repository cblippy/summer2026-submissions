#include "Spinner.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

std::vector<int> reachTargetScore(Spinner& spinner, int targetScore, std::vector<int> spins);

int main()
{
    srand(time(0));

    Spinner spinner(6);
   
    std::vector<int> spins;
    spins = reachTargetScore(spinner, 20, spins);
    int total = 0;

    std::cout << "Spins: ";

    for (int i = 0; i < spins.size(); i++)
    {
        std::cout << spins[i] << " ";
        total += spins[i];
    }
    std::cout << std::endl;
    std::cout << "Total Score: " << total << std::endl;
    return 0;
}

std::vector<int> reachTargetScore(Spinner& spinner, int targetScore, std::vector<int> spins)
{
    int total = 0;

    for (int i = 0; i < spins.size(); i++)
    {
        total += spins[i];
    }
    int spinValue = spinner.spin();

    if (total + spinValue >= targetScore)
    {
        spins.push_back(spinValue);
        return spins;
    }
    else
    {
        spins.push_back(spinValue);
        return reachTargetScore(spinner, targetScore, spins);
    }
}