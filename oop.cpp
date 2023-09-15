#include <iostream>
#include <string>
#include <set>

class Animal {

private:
	int legs = 4;
	std::string name = "";
	std::string type = "";

public:
	static int countAnimal;
	static std::set<std::string> nameAnimal;
	
	//Default Constructor
	Animal() {
		++countAnimal;
		std::cout << "Init Difoult Constructor\n";
	}

	// Constructor for name
	Animal(std::string name) : name(name) {
		nameAnimal.insert(name);
		++countAnimal;
		std::cout << "Used Constructor for name\n";
	}
	// Parameters Constructor and Initializer 
	Animal(int legs, std::string name, std::string type) : legs(legs), name(name), type(type) {
		nameAnimal.insert(name);
		++countAnimal;
		std::cout << "Init Parameters Constructor\n";
	}

	// Copy Constructor and Initializer 
	Animal(const Animal& copy) : legs(copy.legs), name(copy.name), type(copy.type) {
		nameAnimal.insert(name);
		++countAnimal;
		std::cout << "Init Copy Constructor\n";
	}

	static std::string printName() { // static method
		std::string temp = "";
		for (auto& it : nameAnimal) {// for (auto it = nameAnimal.begin(); it != nameAnimal.end(); ++it) {
			temp += it + '\n';
		}
		return temp;
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
std::set<std::string> Animal::nameAnimal;


int main() {

	Animal cat(4, "Barsic", "cat");
	
	std::cout << cat.countAnimal << '\n' << Animal::printName() << '\n';	
	Animal dog("dog");
	std::cout << dog.countAnimal << '\n' << Animal:: printName() << '\n';
	Animal car("car");
	std::cout << car.countAnimal << '\n' << Animal::printName() << '\n';

}
