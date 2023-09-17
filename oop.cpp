#include <iostream>

class Human {
public:
	std::string name = "Someone";	
	int age = 20;
	std::string password;


	// nps + 5
	Human operator + (const int number) const {
		Human temp = *this;
		temp.age += number;
		return temp;
	}

	// nps + nps2
	Human operator + (const Human& temp) const {
		Human temp2 = *this;
		temp2.age += temp.age;
		return temp2; 
	}

	// ++nps
	Human& operator++() {
		++age;
		return *this;	
	}

	//nps++
	Human operator ++ (int) {
		Human temp = *this;
		++age;
		return temp;
	}

	// += nps2
	Human operator += (const Human& temp) {
		int age_ = age;
		*this = temp;
		age += age_;
		return temp;
	}

	// = nps
	Human& operator = (const Human& other) {
		age = other.age;
		name = other.name;
		return *this;
	}

	// == nps
	bool operator == (const Human& other) const {
		return password == other.password;
	}

	// [string]
	std::string& operator [] (const std::string& argument) {
		if (argument == "name")
			return name;
		else if (argument == "password")
			return password;
		else throw std::logic_error("Has not argument is name  " + argument);
	}

	// 5 + nps
	friend Human operator + (const int number, const Human& h);			
};

// 5 + nps
Human operator + (const int number, const Human& h) {
	Human temp = h;
	temp.age += number;
	return temp;
}

int main() {

	Human nps = { "Artem", 35, "498434" };
	Human nps2 = { "Sveta", 25, "498434" };

	nps = nps + 5;
	nps = 5 + nps;
	nps2 = ++nps2; 
	nps2 = nps2++;
	nps = nps + nps2;
	std::cout << nps2.name << ' ' << nps.age << '\n';
	nps = nps2 += nps;
	std::cout << nps2.name << ' ' << nps2.age << '\n';
	std::cout << (nps == nps2) << '\n';
	nps["name"] = "Maria";
	try {
		nps["sdf"] = "****";
	}
	catch (std::exception& e) {
		std::cout << e.what() << '\n';
	}
	std::cout << nps.name << ' ' << nps.age << ' ' << nps.password;
}

