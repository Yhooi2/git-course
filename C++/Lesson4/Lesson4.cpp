#include<iostream>

using namespace std;

int main() {
	double x, y;
	char oper;
	cin >> x >> oper >> y;

	cout << "Operation result: ";
	switch (oper) {
		case '+':
			cout << x + y;
			break;
		case '-':
			cout << x - y;
			break;
		case '*':
			cout << x * y;
			break;
		case '/':
			cout << x / y;
			break;
		default:
			cout << "No such operator";
	}
}