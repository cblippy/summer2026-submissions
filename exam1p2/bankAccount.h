#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
using namespace std;

class BankAccount
{
private: 
    string accountNumber;
    string ownerName;
    double balance;
public: 
    BankAccount();
    BankAccount(string accNum, string name, double initialBal);

    string getAccountNumber() const;
    string getOwnerName() const;
    double getBalanceUSD() const;
    double getBalanceEuros() const;

    void setAccountNumber(string newAccNum);
    void setOwnerName(string newName);
    void setBalance(double newBalance);

    void deposit(double Amount);
    void withdraw(double Amount);
};
#endif