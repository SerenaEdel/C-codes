/*
A C++ program of a bank management system
Author: Edel Serena
Reg No:BSCIT-05-0068/2024
Date:25/02/2025
*/
#include <iostream>
#include <string>

using namespace std;

// Base class: AccountHolder
class AccountHolder {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// Derived class: BankAccount (inherits from AccountHolder)
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    // Constructor initializing name, accountNumber, and balance
    BankAccount(string n, int accNum, double bal) {
        setName(n);
        accountNumber = accNum;
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
};

// Derived class: SavingsAccount (inherits from BankAccount)
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    // Constructor initializing name, accountNumber, balance, and interestRate
    SavingsAccount(string n, int accNum, double bal, double rate) 
        : BankAccount(n, accNum, bal) {
        interestRate = rate;
    }

    double getInterestRate() {
        return interestRate;
    }
};

// Main function to test the program
int main() {
    // Creating a SavingsAccount object
    SavingsAccount myAccount("John Doe", 12345, 1000.50, 2.5);

    //this is to displaying account details
    cout << "Account Holder: " << myAccount.getName() << endl;
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Balance: $" << myAccount.getBalance() << endl;
    cout << "Interest Rate: " << myAccount.getInterestRate() << "%" << endl;

    return 0;
}
