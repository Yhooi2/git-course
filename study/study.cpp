
#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::ifstream fin ("output.txt");

	if (fin.is_open()) {
		std::string s;
		std::getline(fin, s);
		std::cout << s;
		fin.close();

	}
}