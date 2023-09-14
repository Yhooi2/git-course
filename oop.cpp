#include <iostream>

class Entity {

public:
	int* pointer;

	// Default Constructor
	Entity() : pointer(new int(2)) {} // Initializer list

	// Copy Constryctor
	Entity(const Entity& address) : pointer(new int(*address.pointer)) {} // Initializer list

	// Destructor delite memery
	~Entity() {

		std::cout << "Destructor delete: "<< ' ' << pointer << '\n';
		delete pointer;

	}

};

int main() {

	Entity Any;
	Entity Other(Any);
	
	// Pointers dereference
	std::cout << *Any.pointer << ' ' << *Other.pointer << '\n';

}