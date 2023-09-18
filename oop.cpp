#include <iostream>

template <typename T>

class Position {
public:
	T x;
	T y;

	Position(T x, T y) : x(x), y(y){}

	void print() {
		std::cout << "x = " << x << '\n';
		std::cout << "y = " << y << '\n';
	}
};
template<>
class Position<std::string> {
public:
	std::string x;
	std::string y;

	Position(std::string x, std::string y) : x(x), y(y) {}

	void print() {
		std::cout << x << '\n';
		std::cout << y << '\n';
	}

};

int main() {
	 /*Position<int> point(1, 2);
	 point.print();*/

	 Position <std::string> point("x = 1", "y =2");
	 point.print();

}