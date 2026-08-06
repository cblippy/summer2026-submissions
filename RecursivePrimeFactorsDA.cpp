#include <iostream>
#include <vector>
using namespace std;

int findLowestPrimeFactor(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return i;
        }
    }
    return 0;
}

vector<int> getPrimeFactors(int num)
{
    vector<int> factors;

    int lowestFactor = findLowestPrimeFactor(num);

    if (lowestFactor == 0)
    {
        factors.push_back(num);
        return factors;
    }
    factors.push_back(lowestFactor);

    vector<int> remainingFactors = getPrimeFactors(num /lowestFactor);

    for (int factor : remainingFactors)
    {
        factors.push_back(factor);
    }
    return factors;
}


int main()
{
    int number;

    cout << "\nEnter any integer: ";
    cin >> number;

    vector<int> factors = getPrimeFactors(number);

    cout << "Prime factors: ";

    for (int factor : factors)
    {
        cout << factor << " ";
    }
    cout << endl << endl;

    return 0;
}