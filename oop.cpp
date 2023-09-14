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
	  Animal(int legs, std::string name, std::string type) : legs(legs), name(name), type(type) {} // Constructor
		  //this->legs = legs;  - Same thing
		  //this->name = name;
		  //this->type = type;

	  //}

	void setLegs(int newLegs) { // Setter
		if (newLegs >= 0 && newLegs <= 1000) {
			legs = newLegs;
		}
	}

	std::string getLegs() { //Gettor
		return std::to_string(legs) + ' ' + name + ' ' + type + '\n';
	}
};

int main() {

	Animal cat(4, "Barsic", "cat");
	Animal dog;
	std::cout << cat.getLegs() + ' ' + dog.getLegs();
}