#include <iostream>

const int SIZE = 3; // size of the board

using namespace std;

char board[SIZE][SIZE];

void printBoard() {
	
	system("cls");
	// Print board
	cout << "  1 2 3\n";
	for (int i = 0; i < SIZE; i++) {
		cout << i + 1 << " ";
		for (int j = 0; j < SIZE; j++) {
			cout << board[i][j] << ' ';
		}
		cout << endl;
	}
}

int main() {

	// Initialize empty board
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			board[i][j] = '_';
		}
	}

	// Start game
	for (int torn = 0; torn < 9; torn++) {
		int x, y;
		char sign;

		do {
			// Get player move
			printBoard();
			cout << endl << "Player " << ((torn % 2 == 0) ? "1 " : "2 ") << "Enter coordinates : ";
			cin >> x >> y;
			x--; y--;

			if (torn % 2 == 0)
				sign = 'X';
			else
				sign = 'O';
		} while (board[x][y] != '_');//check correct
		// Input date
		board[x][y] = sign;

		// check result	
		bool check = false;
		bool checkDioganal = true;
		bool check2Dioganal = true;

		for (int i = 0; i < SIZE; i++) {
			bool checkColumns = true;
			bool checkRows = true;

			for (int j = 0; j < SIZE; j++) {
				if (board[i][j] != sign)
					checkColumns = false;
				if (board[j][i] != sign)
					checkRows = false;
			}
			check |= checkColumns | checkRows;

			if (board[i][i] != sign)
				checkDioganal = false;
			if (board[i][2 - i] != sign)
				check2Dioganal = false;
		}
		check |= checkDioganal | check2Dioganal;

		if (check)
		{
			// Outpute result
			printBoard();
			cout << endl << "Win Player " << ((torn % 2 == 0) ? "1 " : "2 ") << "!!!\n";
			return 0;
		}

	}
	printBoard();
	cout << "Draw!";
}