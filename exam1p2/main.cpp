// Callie Sims -- Computer Science 2
// Summer 2026 Exam 1 Coding Portion
// 2. Bank Account

#include "bankAccount.h"
#include <iostream>
using namespace std;

int main()
{
    BankAccount account ("000001", "Jane Doe", 600.00);

    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Owner Name: " << account.getOwnerName() << endl;
    cout << "Balance: $" << account.getBalanceUSD() << "\n" << endl;

    account.deposit(100.00);
    cout << "Deposit $100.00, you now have: $" << account.getBalanceUSD() << " USD" << endl;
    account.withdraw(100.00);
    cout << "Withdraw $100.00, you now have: $" << account.getBalanceUSD() << " USD" << endl;
    account.withdraw(42.00);
    cout << "Withdraw $42.00, you now have: $" << account.getBalanceUSD() << " USD" << "\n" << endl;

    cout << "Balance(USD): $" << account.getBalanceUSD() << endl;
    cout << "Balance(Euros): $" << account.getBalanceEuros() << endl;
}