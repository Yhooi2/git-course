#include<iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
//	if (x < y) {
//		cout << "(x < y)";
//	}

//	else {
//		cout << "(x >= y)";
//	}
	cout << ((x < y) ? "x < y" : "x >= y");
	// -- Ternary operator
}