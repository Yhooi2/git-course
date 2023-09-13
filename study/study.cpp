#include <iostream>
#include <list>

int main() {

	std::list<int> l;
	int size = 0, number = 0;
	std::cin >> size;
	for (int i = 0; i < size; ++i) {
		std::cin >> number;
		l.push_front(number);
		l.push_back(number);
	}

	auto iterator = l.begin();
	std::advance(iterator, size);//do { ++iterator; } while (--size);
	l.insert(iterator, 0);
	//l.sort();
	//l.reverse();
	for (auto it : l) { //for (auto iterator = l.begin(); iterator != l.end(); ++iterator) { *it
		std::cout << it << ' ';
	}
}