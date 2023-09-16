#include <iostream>
#include <string>
#include <vector>

class General { // virtual class because there is a virtual function
protected:
	General() {
		std::cout << " General\n" << this << '\n';
	}
	~General() {
		std::cout << "~General\n";
	}
	virtual void virtualFunction() = 0; // virtuall function make virtual class

};


class Human : virtual public General {

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
		std::cout << "~Human Destructor\n";
	}

	std::string name;
	friend std::string getName(Human&);
};


std::string getName(Human& h) {
	return h.name;
}

class Job : virtual public General {

protected:
	Job() : Job(0) {
		std::cout << "Job()\n";
	}

	Job(int salary) : salary(salary) {
		std::cout << "Job(int)\n";
	}
public:
	void work() {
		std::cout << "Get paid " << salary << "$\n";
	}

	~Job() {
		std::cout << "~Job()\n";
	}

	int salary;

};


class Doctor : public Job, public Human {
	 
public:

	Doctor() : Human("Doctor()") {
		std::cout << "Default Constructor of Doctor\n ";
	}

	Doctor(const std::string& name, const int salary, const int number) : Human(name), Job(salary), numPatients(number) {
		std::cout << "Doktor " << name << number << '\n';
	}

	void work() override {
		std::cout << "Doctor " << name << " is working\n";
	}

	~Doctor() {
		std::cout << "~Doctor\n";
	}

protected:
	int numPatients = 0;
};

int main() {

	std::vector<Human*> nps;
	nps.push_back(new Doctor("Jon", 1000, 10));
	nps[0]->work();
	((Job*)(Doctor*)  nps[0])->work();

	Doctor d;
	Human h = (Doctor)d; // Doctor d became Human h
	std::cout << h.name;
	h.work();

	delete nps[0]; 
}