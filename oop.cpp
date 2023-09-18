#include <iostream>
#include <string>

template <typename T>

class Position {
public:
	T x;
	T y;

	Position(T x, T y) : x(x), y(y){}

	virtual void print() const {
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

	virtual void print() const {
		std::cout << x << '\n';
		std::cout << y << '\n';
	}
};

template <typename U>
class Position3D : public Position<U> {
public:
	U z;
	Position3D(U x, U y, U z) : Position<U>(x, y), z(z) {}

	void print() const override {
		this->Position <U>::print();
		std::cout << "z = " << z << '\n';
	}
};

int main() {
	 Position3D<int> point(1, 2, 3);
	 point.print();

	 //Position <std::string> pointed("x = 1", "y =2");
	 //pointed.print();

}