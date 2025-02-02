/*
A C++ program to show car details 
Author: Edel Serena 
Reg No:BSCIT-05-0068/2024
Date:29/01/2025
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    float price;
    int mileage;

public:
    Car(string b, string m, float p, int mi) : brand(b), model(m), price(p), mileage(mi) {}

    // Function to display car details
    void display() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Function to drive the car and update mileage
    void drive(int distance) {
        mileage += distance;
        cout << "Mileage updated to: " << mileage << " miles" << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 20000, 5000);

    // Displaying the car's details
    cout << "Initial car details:" << endl;
    car.display();

    // Driving the car for 150 miles 
    cout << "\nDriving the car for 150 miles..." << endl;
    car.drive(150);

    // Driving the car for 300 miles
    cout << "\nDriving the car for 300 miles..." << endl;
    car.drive(300);

    return 0;
}