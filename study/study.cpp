#include <iostream>
#include <functional>
#include <algorithm>

struct Animal {
	int legs;
	std::string name;
};

void setSetting(std::function<void(Animal*)> f1, Animal* p) {

	f1(p);
}
/*
bool srt(int x, int y) {
	return x > y;
}
*/
	int main() {

		Animal cat{ 4, "Barsic" };
		Animal* pointer = &cat;
		std::cout << sizeof(pointer) << std::endl;

		std::cout << (*pointer).legs << ' ' << (*pointer).name << std::endl;// Same thing
		std::cout << pointer->legs << ' ' << pointer->name << std::endl;// Same thing
		std::cout << cat.legs << ' ' << cat.name << std::endl;// Same thing

		std::string setting = "name";
		std::function<void(Animal*)> f;
		std::cout << &f << std::endl;
		if (setting == "name") {
			f = [](Animal* dog) {dog->name = "Djeck"; };// Lambda funcktion
		}
		else
			f = [](Animal* dog) {dog->legs = 3; };

		setSetting(f, pointer);// pointer of function for function
		std::cout << pointer->legs << ' ' << pointer->name; 

	}