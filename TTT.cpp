#include <iostream>

using namespace std;
char square[9] = { '0','1','2','3','4','5','6','7','8' };
int checkwin()
{
	if (square[0] == square[1] && square[1] == square[2])
	{
		if (square[0] == 'X')
			return 1;
		else
			return 2;
	}
	else
		if (square[3] == square[4] && square[4] == square[5])
		{
			if (square[3] == 'X')
				return 1;
			else
				return 2;
		}
		else
			if (square[6] == square[7] && square[7] == square[8])
			{
				if (square[6] == 'X')
					return 1;
				else
					return 2;
			}
			else
				if (square[0] == square[3] && square[3] == square[6])
				{
					if (square[0] == 'X')
						return 1;
					else
						return 2;
				}
				else
					if (square[1] == square[4] && square[4] == square[7])
					{
						if (square[1] == 'X')
							return 1;
						else
							return 2;
					}
					else
						if (square[2] == square[5] && square[5] == square[8])
						{
							if (square[2] == 'X')
								return 1;
							else
								return 2;
						}
						else
							if (square[0] == square[4] && square[4] == square[8])
							{
								if (square[0] == 'X')
									return 1;
								else
									return 2;
							}
							else
								if (square[2] == square[4] && square[4] == square[6])
								{
									if (square[2] == 'X')
										return 1;
									else
										return 2;
								}
								else
									if (square[0] == square[3] && square[3] == square[6])
									{
										if (square[0] == 'X')
											return 1;
										else
											return 2;
									}
									else
										return 0;
}

void mark(int player, int box)
{
	if (player == 1)
	{

		square[box] = 'X';
	}
	else
		square[box] = 'Y';
}

void display()
{
	for (int i = 0; i < 9; i++)
	{
		cout << square[i] << " | ";
		if (i == 2 || i == 5 || i == 8)
			cout << endl << "-----------" << endl;
	}
}
int startTicTacToe()
{
	int player1 = 1, player2 = 2;

	int box, result = 0, flag = 0;

	for (int i = 1; i < 5; i++)
	{

		cout << endl << "Player " << player1 << " enter the box" << endl;
		cout << "Must be a number from 0 to 9. e.g. 3" << endl;
		cin >> box;
		mark(player1, box);
		display();

		result = checkwin();
		if (result == 1)
		{
			cout << "Congratualtions! player " << player1 << " has won!" << endl;
			flag = 1;
			break;
		}
		else
			if (result == 2)
			{
				cout << "Congratualtions! player " << player2 << " has won!" << endl;
				flag = 1;
				break;
			}

		cout << "Player " << player2 << " enter the box" << endl;
		cin >> box;
		mark(player2, box);
		display();

		result = checkwin();
		if (result == 1)
		{
			cout << "Congratualtions! Player " << player1 << " has won!" << endl;
			flag = 1;
			break;
		}
		else
			if (result == 2)
			{
				cout << "Congratualtions! Player " << player2 << " has won!" << endl;
				flag = 1;
				break;
			}
	}
	if (flag == 0)
		cout << "Sorry, the game is was draw...";

	return 0;
}