#include<iostream>

using namespace std;

int main() {
	int x, y;
	char oper;
	cin >> x >> oper >> y;

	cout << "Operation result: ";
	if (oper == '+') {
		cout << x + y;
	}
	else if (oper == '-') {
		cout << x - y;
	}
	else if (oper == '*') {
		cout << x * y;
	}
	else if (oper == '/') {
		cout << x / y;
	}
	else if (oper == '%') {
		cout << x % y;
	}
	else
		cout << "ERROR";
}