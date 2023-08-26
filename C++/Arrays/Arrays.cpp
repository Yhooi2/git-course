#include <iostream>

const int MAX = 100;

using namespace std;


int main() {

	int matrix[MAX][MAX];//int arr[2][2][2]; {{{ , } { , }}{{ , }{ , }}}
	int size;

	cin >> size; // Enter matrix size

	// read matrix
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			cin >> matrix[i][j];

// Calculate sums
	int sumAbove = 0, 
		sumBelow = 0, 
		sumDiagonal = 0;

	for (int i = 0; i < size; i++) 
		for (int j = 0; j < size; j++) {
			if (i < j)
				sumBelow += matrix[i][j];
			else if (i > j)
				sumAbove += matrix[i][j];
			else
				sumDiagonal += matrix[i][i];
		}

// Print sums
	cout << sumAbove << " " << sumBelow << " " << sumDiagonal;
}