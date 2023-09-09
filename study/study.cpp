#include <iostream>
#include <functional> // std::fanction<type(type of argumrnt)> name = name function; 

// print int argument
void print(int x) {
	std::cout << x << std::endl;
}

//f with argument point to function
void useF(void(*point)()) {
	point();
}

//funcktion with argument point function with argument int
void useF(void(*point)(int)) {

	point(3);
}
// Same thing
void useF(std::function<void(int)> f) {

	f(4);
}

int main() {

	void(*point)(int) = print;//initialization point
	useF(point);//f(f())
	std::function<void(int)> pointf = print;
	useF(pointf);
}