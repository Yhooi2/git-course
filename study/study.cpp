#include <iostream>



int main() {
	int n = 0;
	std::cin >> n;
	int** pp = new int* [n]; // dynamic matrix

	for (int i = 0; i < n; ++i) {
		pp[i] = new int[n];
	}

	pp[1][1] = 1;
	std::cout << pp[1][1];

	for (int i = 0; i < n; ++i) {
		delete[] pp[i];
	}
	delete[] pp;

}