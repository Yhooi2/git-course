#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int size = 0;
	std::cin >> size;
	std::vector<int> v;//int* dynamicArray = new int[size];
	int temp = 0;
	for (int i = 0; i < size; ++i) {
		std::cin >> temp;
		v.push_back(temp);
	}
	std::sort(v.begin(), v.end()); //sort vector! dynamic array with pointer: sort(diArray, diArray + size);
	v.push_back(1);
	v.push_back(2);
	v.pop_back();
	
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v[i] << ' ';
	}
	//delete dynamicArray
}
