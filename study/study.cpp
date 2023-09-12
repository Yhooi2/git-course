#include <iostream>
#include <algorithm> // sort

void reverse(int* begin, int* end) {
	
	std::cout << "My reverse\n";

	while(begin < end) {
		//int* temp = begin;
		//begin = end;
		//end = temp;
		std::swap(begin, end);

		begin++;
		end--;
	}

	return;
}

int main() {
	int size;
	std::cin >> size;
	int* diArray = new int[size];// dynamic array
	//std::fill(diArray, diArray + size, size);

	for (int i = 0; i < size; ++i) {
		std::cin >> diArray[i];
	}

	std::sort(diArray, diArray + size);
	reverse(diArray, diArray + size);

	std::cout << diArray << ' ' << diArray[0] << ' ' << *diArray << ' ' << diArray + 1 <<  std::endl;
	int* pointer = diArray;
	do {
		std::cout << *pointer << ' ' << pointer << std::endl;
		++pointer;// Pointer arithmetic

	} while (pointer < diArray + size);

	int* first = diArray;
	int* last = diArray + size;
	std::cout << last - first;

	delete[] diArray;
}