//minesweeper

#include <iostream>
#include <cstdlib> //rand(), srand()
#include <ctime> // time()

const int WIDTH = 9, HEIGHT = 9, MINES = 10,
		  SIZE = 100;

int field[SIZE][SIZE];
int fieldFerst[SIZE][SIZE];

using namespace std;


// Print game field
void printField(int fieldFerst[SIZE][SIZE]) {
	system("cls");

	// Print header with coordinates
	cout << "  ";

	for (int i = 0; i < WIDTH; i++) {
		cout << ' ' << i + 1;
		if (i < 9)
			cout << ' ';
	}
	cout << endl;

	// Print field
	for (int i = 0; i < HEIGHT; i++) {
		cout << i + 1 << ' ';
		if (i < 9)
			cout << ' ';
		// Print cell volue or placeholder
		for (int j = 0; j < WIDTH; j++) {
			if (fieldFerst[i][j] == -1)
				cout << "X ";
			else if (fieldFerst[i][j] == -2)
				cout << "_  ";
			else if (fieldFerst[i][j] == -3)
				cout << "f  ";
			else
				cout << fieldFerst[i][j] << "  ";
		}
		cout << endl;
	}
	return;
}

// Deep First Serch(DFS)
void checkMove(int fieldFerst[SIZE][SIZE], int i, int j) {

	// Check surrounding cells
	for (int a = i - 1; a < i + 2; a++) {
		for (int b = j - 1; b < j + 2; b++) {

			// Open empty adjacent cells
			if (a >= 0 && a <= 0 &&
				b >= 0 && b <= 0 &&
				field[a][b] == 0 &&
				fieldFerst[a][b] == -2) {

				fieldFerst[a][b] = field[a][b];
				checkMove(fieldFerst, a, b);
			}
		}
	}
}

int main() {

	// Initialize field
	for (int i = 0; i < WIDTH; i++) {
		for (int j = 0; j < HEIGHT; j++) {
			fieldFerst[i][j] = -2;
		}
	}
	printField(fieldFerst);

	srand(time(nullptr));// Generate random seed

	// Set random cells as mines
	for (int i = 0; i < MINES; i++) {
		int x, y;
		do {
			x = rand() % WIDTH;
			y = rand() % HEIGHT;
		} while (field[x][y] == -1);

		field[x][y] = -1;
	}

	// Calculate number of adjacent mines
	for (int i = 0; i < WIDTH; i++) {
		for (int j = 0; j < HEIGHT; j++) {
			if (field[i][j] == 0) {
				for (int a = i - 1; a < i + 2; a++) {
					for (int b = j - 1; b < j + 2; b++) {
						if (a >= 0 && a <= WIDTH &&
							b >= 0 && b <= HEIGHT &&
							field[a][b] == -1)
							++field[i][j];
					}
				}
			}
		}
	}

	// Game Loop
	do {

		//code for player's move
		char command;
		int width, height;

		do {
			cout << endl << "Enter command (o - open, f - flage, q - exit): ";
			cin >> command;

			if (command == 'q')
				return 0;

			cout << "Enter coordinates: ";
			cin >> width >> height;
		}

		while (width > WIDTH || height > HEIGHT ||
			width < 0 || height < 0);

		--width;
		--height;
		if (command == 'f') {
			if (fieldFerst[width][height] == -2)
				fieldFerst[width][height] = -3;
			else if (fieldFerst[width][height] == -3)
				fieldFerst[width][height] = -2;
		}

		//Game over
		else if (field[width][height] == -1) {
			fieldFerst[width][height] = field[width][height];
			printField(fieldFerst);
			cout << "Game over";
			return 0;
		}

		else if (field[width][height] == 0)
			checkMove(fieldFerst, width, height);
		else
			fieldFerst[width][height] = field[width][height];
		printField(fieldFerst);
	} while (true);
	return 0;
}