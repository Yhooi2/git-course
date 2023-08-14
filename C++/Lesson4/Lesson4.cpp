#include<iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if (x < y) {
		cout << "(x < y)";
	}
	else if (x > y) {
		cout << "(x > y)";
	}
	else {
		cout << "(x = y)";
	}
}