

#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::ifstream fin;
	fin.open("output.txt");
	if (fin.is_open()) {
		std::string s;
		while (std::getline(fin, s)) {
			std::cout << s;
			fin.close();
		}
	}
}