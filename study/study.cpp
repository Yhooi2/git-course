#include <iostream>
#define NDEBUG
#include <cassert>


const int SIZE = 100;



struct Animal {
	int legs = 4;
	std::string name = "";
};

void checkAnimal(const Animal& pet) {

	std::cout << pet.name << std::endl;
	assert((pet.legs > 0 && pet.legs < 1000) && "Animals don't have less then 0 legs and morre  then 1000!");
	assert((pet.name.size() > 0 && pet.name.size() < 100) && "Name is too long or empty");
	assert((pet.name[0] >= 'A' && pet.name[0] <= 'Z') && "Names must begin with capitan letter");
}

int main() {

	Animal cat = { 4, "barsic" };
	checkAnimal(cat);
	int n;
	static_assert(SIZE > 0, "SIZE for array mast be greater than null!");//break before start
	static_assert(sizeof(int) == 4, "Check size int");
	std::cin >> n;
	assert(((void)"I can write here", n < 10 && n >= 0) && "  Enter number between 0 and 9 number");

	try {

	}
	catch (...) {

	}
}