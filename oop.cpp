#include <iostream>

template <typename T, typename T2>

T sum(T a, T2 b) {
	return a + b;
}

int main() {
	std::cout << sum(2, 2.3);
}