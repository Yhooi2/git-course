//minesweeper

#include <iostream>
#include <cstdlib> //rand(), srand()
#include <ctime> // time()

const int WIDTH = 4, HEIGHT = 4, MINES = 1,
		  SIZE = 100;

int field[SIZE][SIZE];
int fieldFerst[SIZE][SIZE];
int counter; // counter steeps
using namespace std;


// Print game field
void printField() {
	system("cls");

	// Print header with coordinates
	cout << "STEEP: " << counter << endl
		 << "  ";

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
				cout << "X  ";
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
void checkMove(const int& i, const int& j) {

	// Check surrounding cells
	for (int a = i - 1; a < i + 2; a++) {
		for (int b = j - 1; b < j + 2; b++) {

			// Open empty adjacent cells
			if (a >= 0 && a < WIDTH &&
				b >= 0 && b < HEIGHT &&
				field[a][b] == 0 &&
				fieldFerst[a][b] == -2) {

				fieldFerst[a][b] = field[a][b];
				checkMove(a, b);
			}
		}
	}
}

bool openCell(const int& x,const int& y) {
	if (field[x][y] == -1)
		return false;
	if (field[x][y] > 0) {
		fieldFerst[x][y] = field[x][y];
			return true;
	}
	checkMove(x, y);
	return true;
}

bool checkWin() {
	for (int i = 0; i < WIDTH; i++) {
		for (int j = 0; j < HEIGHT; j++) {
			if (fieldFerst[i][j] == -2 && field[i][j] != -1)
				return false;
		}
	}
	return true;
}
bool printEnd(bool fl) {
	for (int i = 0; i < WIDTH; i++) {
		for (int j = 0; j < HEIGHT; j++) {
			if (field[i][j] == -1)
				fieldFerst[i][j] = field[i][j];
		}
	}
	printField();
	char end;
		cout << "\nYOU " << (fl ? "WIN!" : "GAME OVER!") << endl << endl;
		cout << "Enter anything to start new game, or q to exit: ";
		cin >> end;
		return (end == 'q');
}

int main() {

	bool exit = true;
	do {
		counter = 0; // zeroing counter

		// Initialize field
		for (int i = 0; i < WIDTH; i++) {
			for (int j = 0; j < HEIGHT; j++) {
				fieldFerst[i][j] = -2;
			}
		}
		printField();

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

		bool newGame = true;
		// Game Loop
		do {
			counter++;
			//code for player's move
			char command;
			int width, height;

			do {
				cout << endl << "Enter command (o - open, f - flage, n - new, q - exit): ";
				cin >> command;

				if (command == 'q') {
					newGame = exit = false; 
					return 0;
				}
					
				if (command == 'n') {
					newGame = false;
					break;
				}
				cout << "Enter coordinates: ";
				cin >> width >> height;

				--width; // Corect of coordinates
				--height;
			}	
			while (width >= WIDTH || height >= HEIGHT ||
				   width < 0 || height < 0);


			if (command == 'f') {
				if (fieldFerst[width][height] == -2)
					fieldFerst[width][height] = -3;
				else if (fieldFerst[width][height] == -3)
					fieldFerst[width][height] = -2;
				--counter;
			}

			//Game over
			else if (!openCell(width, height)) {
				if (printEnd(openCell(width, height)))
					exit = false;
				newGame = false;
			}

			printField();
			if (checkWin()) {
				if (printEnd(checkWin()))
					exit = false;
				newGame = false;
			}

		} while (newGame);
	} while (exit);
return 0;
}