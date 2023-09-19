#include <iostream>

template <typename T, typename T2> 

double multiply (T a, T2 b) {
	return a * b;
}

int main() {
	float a = 3;
	int b = 4;
	std::cout << typeid(multiply(a, b)).name() << multiply(a, b);
}