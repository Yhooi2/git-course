#include <iostream>
#include <functional>

/*int multiplication(int x, int y) {
	return x * y;
}
*/

int calc(std::function<int(int, int)> f, int x, int y) {
	return f(x, y);
}

int main() {
	char oper;
	int x, y;
	std::cin >> x >> oper >> y;
	std::function<int(int x, int y)> f;
	std::cout << "Operation resalt: ";
	switch (oper) {
	case '*':
		//f = multiplication;
		f = [](int x, int y) {return x * y; };
		break;
	case '+':
		f = [](int x, int y) {return x + y; };
		break;
	case '-':
		f = [](int x, int y) {return x - y; }; // Lambda functions same thing
		break;
	case '/':
		f = [](int x, int y) {return x / y; };
	}
	std::cout << calc(f, x, y);
	
}