#include <iostream>

using namespace std;

int arr[100][100];//int arr[2][2][2]; {{{ , } { , }}{{ , }{ , }}}

int main() {
	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			cin >> arr[i][j];

	int sum_above = 0, sum_below = 0, sum_diag = 0;

	for (int i = 0; i < size; i++) 
		for (int j = 0; j < size; j++) {
			if (i < j)
				sum_below += arr[i][j];
			else if (i > j)
				sum_above += arr[i][j];
			else
				sum_diag += arr[i][i];
		}
	cout << sum_above << " " << sum_below << " " << sum_diag;
}