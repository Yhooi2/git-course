#include <iostream>
#include <string>

class Animal {

private:
	int legs = 4;
	std::string name = "";
	std::string type = "";

public:
	static int countAnimal;
	
	//Default Constructor
	Animal() {
		++countAnimal;
		std::cout << "Init Difoult Constructor\n";
	}

	// Parameters Constructor and Initializer 
	Animal(int legs, std::string name, std::string type) : legs(legs), name(name), type(type) {
		++countAnimal;
		std::cout << "Init Parameters Constructor\n";
	}

	// Copy Constructor and Initializer 
	Animal(Animal& copy) : legs(copy.legs), name(copy.name), type(copy.type) {
		++countAnimal;
		std::cout << "Init Copy Constructor\n";
	}

	// Method Setter
	void setLegs(int newLegs) { 
		if (newLegs >= 0 && newLegs <= 1000) {
			legs = newLegs;
		}
	}

	// Method Gettor
	std::string getLegs() {
		return std::to_string(legs) + ' ' + name + ' ' + type  + '\n';
	}

	//Destructor
	~Animal() { 

		std::cout << "Work of destructor\n";
	}

};
int Animal::countAnimal = 0;


int main() {

	Animal cat(4, "Barsic", "cat");

	//std::cout << cat.getLegs() + dog.getLegs() + car.getLegs();
	std::cout << cat.countAnimal << '\n';

	Animal dog;
	std::cout << dog.countAnimal << '\n';
	Animal car(cat); // copy 
	std::cout << car.countAnimal << '\n';

}
