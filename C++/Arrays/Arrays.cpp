#include <iostream>

const int MAX = 100;

using namespace std;


int main() {

	int matrix[MAX][MAX];//int arr[2][2][2]; {{{ , } { , }}{{ , }{ , }}}
	int size;

	cin >> size; // Enter matrix size

	// input matrix elements
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> matrix[i][j];
		}
	}

	// Calculate sums and zeroing
	int sumEven = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i % 2 == 0 && j % 2 == 0) {
				sumEven += matrix[i][j];
				matrix[i][j] = 0;
			}
		}
	}

// Print updated matrix and sum
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}

	cout << sumEven;
}