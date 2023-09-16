#include <iostream>
#include <string>
#include <vector>
#include <format>

class Human {

public:
	//Default Constructor
	Human() : name("Nobudy") {
		std::cout << "Used Default Constructor\n";
	}

	// Names Constructor
	Human(const std::string& name) : name(name) { 
		std::cout << " Human Names Constructor for " << name << '\n';
	}

	// Method
	virtual void work() {
		std::cout << "Human " << name << " is working\n";
	}

	//Destructor
	virtual ~Human() {
		std::cout << "Human Destructor\n";
	}
protected:
	std::string name;
	friend std::string getName(Human&);
};


std::string getName(Human& h) {
	return h.name;
}

class Doctor : public Human {
	 
public:

	Doctor() : Human("Doctor") {
		std::cout << "Default Constructor of Doctor\n ";
	}

	Doctor(const std::string& name, const int number) : Human(name),numPatients(number) {
		std::cout << "Doktor " << name << number << '\n';
	}

	void work() override {
		std::cout << "Doctor " << name << " is working\n";
	}

	~Doctor() {
		std::cout << "Doctors Destructor\n";
	}

protected:
	int numPatients = 0;
};

int main() {

	std::vector<Human*> nps;
	nps.push_back(new Doctor());
	nps.push_back(new Doctor("Harry", 10));
	nps.push_back(new Human());
	nps.push_back(new Human("Jack"));

	int size = nps.size();

	for (int i = 0; i < size; ++i) {
		nps[i]->work();
	}

	for (int i = 0; i < size; ++i) {
		delete nps[i];
	}
}