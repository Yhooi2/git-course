#include <iostream>
#include <vector>

int main() {

	int size = 0;
	std::cin >> size;
	std::vector<int> v(10, 0);// New vector by 10 and zerroing it

	// New matrix by 10x10 anf zerroing it
	std::vector<std::vector<int>> m(10, std::vector<int>(10, 0));
	// and etc...

	// New matrix by 10x3 and fill it
	std::vector<std::vector <int>>m1(10, std::vector<int>({ 1,2,3 }));

	// old method 
	std::vector<std::vector<int>> v1;
	for (int i = 0; i > size; ++i) {
		v1.push_back(std::vector<int>());
	}
}