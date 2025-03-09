/*
A C++ program for a 1D array
Author: Serena Edel
Reg No:BSCIT-05-0068/2024
Date:6/03/2025
*/

#include <iostream>
using namespace std;

int main() {
    // 1D matrix (array)
    int oneD[5] = {1, 2, 3, 4, 5};
    cout << "1D Matrix:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << oneD[i] << " ";
    }
    cout << endl;

    // 2D matrix (array)
    int twoD[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "2D Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << twoD[i][j] << " ";
        }
        cout << endl;
    }

    // 3D matrix (array)
    int threeD[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
    cout << "3D Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << threeD[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}


