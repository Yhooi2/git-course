#include <iostream>

const int MAX = 100;

using namespace std;


int main() {

	int matrix[MAX][MAX];//int arr[2][2][2]; {{{ , } { , }}{{ , }{ , }}}
	int sizeColumns, sizeRows;

	cin >> sizeColumns // Enter matrix size columns
		>> sizeRows; // Enter matrix size rows

	// input matrix elements
	for (int i = 0; i < sizeColumns; i++) {
		for (int j = 0; j < sizeRows; j++) {
			cin >> matrix[i][j];
		}
	}

// Print matrix trunspose
	for (int i = 0; i < sizeRows; i++) {
		for (int j = 0; j < sizeColumns; j++) {
			cout << matrix[j][i] << ' ';
		}
		cout << endl;
	}
}