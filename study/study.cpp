#include <iostream>

struct Node {
	int value = 0;
	Node* next = nullptr;
};

int main() {
	
	Node* firstList = new Node;
	Node* lastList = firstList; 
	int n;
	std::cin >> n;
	int number = 0;
	for (int i = 0; i < n; ++i) {
		std::cin >> number;
		lastList->value = number;
		Node* newList = new Node;
		lastList->next = newList;
		lastList = newList;
	}

	for (Node* iterator = firstList; iterator != lastList; iterator = iterator->next) {
		std::cout << iterator->value;
	}

	for (auto iterator = firstList, it = iterator->next; iterator != lastList; iterator = it) {
		it = iterator->next;
		delete iterator;
	}
	delete lastList, firstList;
}
