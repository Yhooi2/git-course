#include <iostream>
#include <fstream> // ofstream(), ifistram()
#include <string> // getline(), to_string()

int main() {

	//freopen - learn

	std::ofstream fout("output.txt", std::ios_base::trunc);
	fout.close();
	int counter = 0;
	std::string s, n;

	std::ifstream fin("input.txt");

	if (fin.is_open()) {
		while (getline(fin, s)) {
			n = std:: to_string(++counter);
			fout.open("output.txt", std::ios_base::app);
			fout << n +" " + s + "\n";
			fout.close();
		}		
	}
	fin.close();

	fout.open("output.txt", std::ios_base::app);
	fout << "\n End";
	fout.close();
	fin.open("output.txt");
	if(fin.is_open())
		while (getline(fin, s)) {

			std::cout << s << std::endl;
		}

	fin.close();
	n.insert(n.size(), " -  string");
	std::cout << n;// 

}
