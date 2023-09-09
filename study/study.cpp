#include <iostream>

void print() {
	std::cout << "Hello world\n";
}

void print2() {
	std::cout << "By world\n";
}
void print3(int x) {
	std::cout << x << std::endl;
}

void useF(void(*point1)()) {
	point1();
}

void useF(void(*point1)(int)) {
	point1(3);

}

void f(int y) {

	y++;
}

void f1(int& y) {

	y++;
}

void f2(int* y) {
	(*y)++;
}

int main() {

	void(*point1)() = print;//!!!
	useF(point1);
	point1 = print2;
	useF(point1);
	void(*point4)(int) = print3;
	useF(point4);
	
	int x = 2;
	f(x);
	std::cout << x << std::endl;
	f1(x);
	std::cout << x << std::endl;
	f2(&x);
	std::cout << x << std::endl;
	
	//int x = 4;
	//int& z = x;

	int* point0 = new int(4);
	std::cout << point0 << ' ' << *point0 << std::endl;
	int& link = *point0;
	link++;
	std::cout << point0 << ' ' << *point0 << link << std::endl;
	delete point0;// When new int()

	std::cout << link << std::endl;




	std::string s = "345", s1 = "444";
	std::string* str = nullptr;

	//try {
		//std::cout << *str;
	//}
	//catch (...) {
		//std::cout << "ERROR";
	//}
	if (s == "343") {
		str = &s;
	}
	else {
		str = &s1;
	}
	std::cout << *str << ' ' << & s << std::endl;

	x = 2;
	int* point = &x;

	std::cout << &x << ' ' << point << ' ' << *point << ' ' << x << std::endl;
	x = 3;
	std::cout << &x << ' ' << point << ' ' << *point << ' ' << x << std::endl;
	*point = 4;
	std::cout << &x << ' ' << point << ' ' << *point << ' ' << x << std::endl;

	int arr[10];
	std::cout << &arr << ' ' << arr << ' ' << &arr[0] << ' ' << &arr[1] << std::endl;

	int& y = x;
	std::cout << x << ' ' << &x << ' ' << y << ' ' << &y << std::endl;
	y = 5;
	std::cout << x << ' ' << &x << ' ' << y << ' ' << &y << std::endl;

}