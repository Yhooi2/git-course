#include <iostream>
#include <fstream>
#include <string>// getline

int main() {
	std::string s;
	std::getline(std::cin, s);

	std::ofstream fout("output.txt", std::ios_base::app);

	fout << s + "\n";
	fout.close();
}