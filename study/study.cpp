#include <iostream>

class Student {

	const std::string faculty;
	const int studNumber;
public:

	Student(std::string&& rvalue, const int studNumber)
		: faculty(rvalue), studNumber(studNumber) {}
	Student(const std::string& faculty, const int studNumber)
		: faculty(faculty), studNumber(studNumber) {}
	void print() const {
		std::cout << faculty << ' ' << studNumber << '\n';
	}


};

int main() {
	Student anton("Program", 3424);
	anton.print();
}