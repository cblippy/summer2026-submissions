#include "bankAccount.h"
using namespace std;

BankAccount::BankAccount()
{
    accountNumber = "";
    ownerName = "";
    balance = 0;
}


BankAccount::BankAccount(string accNum, string name, double initialBal)
{
    accountNumber = accNum;
    ownerName = name;
    
    if (initialBal < 0)
    {
        balance = 0;
    }
    else
    {
        balance = initialBal;
    }
}


string BankAccount::getAccountNumber() const
{
    return accountNumber;
}

string BankAccount::getOwnerName() const
{
    return ownerName;
}

double BankAccount::getBalanceUSD() const
{
    return balance;
}

double BankAccount::getBalanceEuros() const
{
    return balance * 0.92;
}


void BankAccount::setAccountNumber(string newAccNum)
{
    accountNumber = newAccNum;
}

void BankAccount::setOwnerName(string newName)
{
    ownerName = newName;
}

void BankAccount::setBalance(double newBalance)
{
    if (newBalance >= 0)
    {
        balance = newBalance;
    }
}


void BankAccount::deposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;
    }
}


void BankAccount::withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}