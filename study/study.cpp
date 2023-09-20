#include <iostream>
#include <string>
#include <vector>

template<typename T>

class Product {

private:
	int quantity;
	const T& price;
	const std::string type;
protected:
	// Constructor
	Product(int quantity, const T& price, const std::string type)
		: quantity(quantity), price(price), type(type) {
	}

public:
	// Product + number = total quantity
	Product operator + (const int number) {
		this->quantity += number;
		return *this;
	}
	Product operator++() {
		++quantity;
		return *this;
	}
	Product operator++(int) {
		++quantity;
		return *this;
	}

	// Print
	virtual void info() const {
		std::cout << "\nType: " << type << "\nPrice: " << price << "\nQuantity : " << quantity << std::endl;
		return;
	}

};


template<typename U>
class Refregerator : public Product<U> {

public:
	// Constructor
	Refregerator(int quintity, U price) : Product<U>(quintity, price, "Refregerator") {

	}
	void info() const override {
		this->Product<U>::info();
	}

};

template<typename Z>
class Kettle : public Product<Z> {

public:

	Kettle(int quintity, Z price) : Product<Z>(quintity, price, "Kettle") {

	}
	void info() const override {

		this->Product<Z>::info();
	}
	
};

int main() {

	std::vector<Product<int>*> catalog;
	catalog.emplace_back(new Refregerator<int>(5, 10555));
	catalog.emplace_back(new Kettle<int>(3, 10500));
	
	size_t size = catalog.size();
	for (int i = 0; i < size; ++i) {
		catalog[i]->info();
	}
	for (int i = 0; i < size; ++i) {
		delete catalog[i];
	}

	Refregerator<int> ariston(5, 3999);
	++ariston;
	ariston++;
	ariston + 10;
	ariston.info();
}