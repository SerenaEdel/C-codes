/*
A C++ program for the encapsulation problem
Author: Serena Edel
Reg No:BSCIT-05-0068/2024
Date:14/02/2025
*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    void setAccountHolder( string a) {// the setter of the account holder
        accountHolder = a;
    }

    string getAccountHolder() {// the getter for the accoutn holder
        return accountHolder;
    }

    void setBalance(double s) {// the setter for the balance
        balance = s;
        }

    double getBalance()  {// the getter for the balance
        return balance;
    }
};
int main() {
   BankAccount e1;
   e1. setAccountHolder ("Serena Mwangale");
   cout<< "name is: " << e1.getAccountHolder()<<endl;
   
   e1.setBalance(200000);
   cout<< "Balance is: "<< e1.getBalance()<< endl;
   
    return 0;
    }