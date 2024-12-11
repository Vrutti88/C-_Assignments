// DESIGN A 'BANK ACCOUNT' CLASS WITH BASIC CREDIT AND DEBIT OPERATIONS IN C++ USING OOP FEATURE.
#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string holder, int number, double initialBalance) 
    {
        accountHolder = holder;
        accountNumber = number;
        balance = initialBalance;
    }
    void displayAccountDetails() 
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
    void credit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Credited: " << amount << "\nNew Balance: " << balance << endl;
        } else 
        {
            cout << "Invalid amount!" << endl;
        }
    }
    void debit(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Debited: " << amount << "\nNew Balance: " << balance << endl;
        } else 
        {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
};

int main() 
{
    BankAccount account("John Doe", 123456, 5000.0);
    
    account.displayAccountDetails();
    account.credit(1000.0);
    account.debit(2000.0);
    account.debit(5000.0);

    return 0;
}
