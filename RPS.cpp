#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int startRockPaperScissors()
{
	const char* picks[3] = { "rock", "paper", "scissors" };
	int pick = 0, secret;

	
	while (pick != 4) {
		cout << "Pick rock (0), paper (1) or scissor (2). Press 4 to end." << endl;
		cin >> pick;
		if (pick == 4) {
			continue;
		}

		srand(time(NULL));
		secret = rand() % 2;

		while (cin.fail()) {
			cout << "Error! Please enter a number." << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> pick;
		}

		while (pick < 0 || pick > 2) {
			cout << "Error! Must be a number between 0 and 2." << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> pick;
		}

		if (pick == secret) {
			cout << "Both of you picked " << picks[pick] << ". It's a draw!" << endl;
			continue;
		}

		if (pick == 0 && secret == 2) {
			cout << "You win!" << endl;
			cout << "Your choice: " << picks[pick] << endl;
			cout << "Computer choice: " << picks[secret] << endl;
			continue;
		}

		if (pick == 1 && secret == 0) {
			cout << "You win!" << endl;
			cout << "Your choice: " << picks[pick] << endl;
			cout << "Computer choice: " << picks[secret] << endl;
			continue;
		}

		if (pick == 2 && secret == 1) {
			cout << "You win!" << endl;
			cout << "Your choice: " << picks[pick] << endl;
			cout << "Computer choice: " << picks[secret] << endl;
			continue;
		}

		else {
			cout << "You lose!" << endl;
			cout << "Your choice: " << picks[pick] << endl;
			cout << "Computer choice: " << picks[secret] << endl;
			continue;
		}
	}

	return 0;
}