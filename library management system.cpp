/*
A C++ program of a bank management system
Author: Waiguru Ian Muchiri
Reg No:BSCIT-05-0096/2024
Date:25/02/2025
*/
#include <iostream>
#include <string>

using namespace std;

// Base class: Person
class Person {
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

// Derived class: LibraryMember (inherits from Person)
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    // Constructor initializing name, memberID, and booksBorrowed
    LibraryMember(string n, int id, int books) {
        setName(n);
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// Derived class: PremiumMember (inherits from LibraryMember)
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    // Constructor initializing name, memberID, booksBorrowed, and membershipFee
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books) {
        membershipFee = fee;
    }

    double getMembershipFee() {
        return membershipFee;
    }
};

// Main function to test the program
int main() {
    // Creating a PremiumMember object
    PremiumMember premiumUser("Alice Johnson", 1001, 5, 29.99);

    // Displaying member details
    cout << "Name: " << premiumUser.getName() << endl;
    cout << "Member ID: " << premiumUser.getMemberID() << endl;
    cout << "Books Borrowed: " << premiumUser.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << premiumUser.getMembershipFee() << endl;

    return 0;
}