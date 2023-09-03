#include <iostream>

using namespace std;

// function to binary
string tobinary(const int& n) {
	if (n == 0)
		return "0";

	string binaryString = "";	

	if (n % 2 == 0)
		binaryString = "0" + tobinary(n/2);

	else 
		binaryString = "1" + tobinary(n/2);

	return s;
}

int main() {
	int num;
	cin >> num;

	string binary = tobinary(num);

	cout << binary<< endl;

	return 0;
}