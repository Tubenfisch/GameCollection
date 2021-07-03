#include <iostream>
#include "TTT.h"
#include "RPS.h"

using namespace std;

int main()
{
    int choice;
    cout << "Pick a game!" << endl;
    cout << endl;
    cout << "1. Tic Tac Toe" << endl;
    cout << "2. Rock Paper Scissors" << endl;
    cout << "Stay tuned for updates!" << endl;

    cin >> choice;
    while (cin.fail()) {
        cout << "Error! Please enter a number." << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> choice;
    }

    switch (choice)
    {
    case 1: startTicTacToe();

    case 2: startRockPaperScissors();

    default:
        break;
    }
}

