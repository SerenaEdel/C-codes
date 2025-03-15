/*
A C++ program that defines a player and their score
Author: Serena Edel 
Reg No:BSCIT-05-0068/2024
Date:13/03/2025
*/

#include <iostream>
#include <string>
using namespace std;

// Define the Player structure
struct Player {
    string name;
    int score;
    int level;
};

// Function to display player information
void displayPlayer(const Player& p) {
    cout << "Name: " << p.name << endl;
    cout << "Score: " << p.score << endl;
    cout << "Level: " << p.level << endl;
}

int main() {
    Player player1, player2;

    // Getting input for player 1
    cout << "Enter details for Player 1:\n";
    cout << "Name: ";
    getline(cin, player1.name);
    cout << "Score: ";
    cin >> player1.score;
    cout << "Level: ";
    cin >> player1.level;
    cin.ignore();  // Clear the input buffer

    // Getting input for player 2
    cout << "\nEnter details for Player 2:\n";
    cout << "Name: ";
    getline(cin, player2.name);
    cout << "Score: ";
    cin >> player2.score;
    cout << "Level: ";
    cin >> player2.level;

    // Displaying the player details
    cout << "\nPlayer 1 Details:" << endl;
    displayPlayer(player1);

    cout << "\nPlayer 2 Details:" << endl;
    displayPlayer(player2);

    return 0;
}