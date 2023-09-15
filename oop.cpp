#include <iostream>
#include <string>

class Human {

public:
	//Default Constructor
	Human() : name("Nobudy") {
		std::cout << "Used Default Constructor\n";
	}

	// Names Constructor
	Human(const std::string& name) : name(name) { 
		std::cout << "Used Names Constructor for " << name << '\n';
	}

	// Method
	void work() {
		std::cout << "Human " << name << " is working\n";
	}

	//Destructor
	~Human() {
		std::cout << "Used Destructor\n";
	}
private:
	std::string name;
	friend std::string getName(Human&);
};


std::string getName(Human& h) {
	return h.name;
}

class Doctor : public Human {
	 
public:

	Doctor() {
		std::cout << "Default Constructor of Doctor\n ";
	}

	Doctor(const std::string& name, const int number) : Human(name),numPatients(number) {
		std::cout << "Doktor " << name << number << '\n';
	}
	~Doctor() {
		std::cout << "Doctors Destructor\n";
	}

protected:
	int numPatients = 0;
};

int main() {
	Doctor dok("Djon", 10);
	dok.work();
	std::cout << " --> " <<getName(dok) << '\n';
}