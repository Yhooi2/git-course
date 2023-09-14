#include <iostream>
#include <string>
 
class Animal {
  
  private:
 
	int legs = 4;
	std::string name = "";
	std::string type = "";
	
  public:
	  Animal() {//Difoult Constructor
		  std::cout << "Difoult Constructor\n";
	  }

	  // Constructor with initializer
	  Animal(int legs, std::string name, std::string type) : legs(legs), name(name), type(type) {} 

	void setLegs(int newLegs) { // Setter
		if (newLegs >= 0 && newLegs <= 1000) {
			legs = newLegs;
		}
	}

	std::string getLegs() { //Gettor
		return std::to_string(legs) + ' ' + name + ' ' + type + '\n';
	}
	~Animal() { //Destructor

		std::cout << "Work of destructor\n";
	}
	
};

int main() {

	Animal cat(4, "Barsic", "cat");
	Animal dog;
	Animal car(cat); // copy 

	std::cout << cat.getLegs() + dog.getLegs() + car.getLegs();
}