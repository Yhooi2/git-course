#include <iostream>

class List {
	class Node {
	public:
		int value = 0;
		Node* prev = nullptr;
		Node* next = nullptr;
		Node() {};
		Node(const int& value, Node* ptev, Node* next): value(value), prev(prev), next(next) {} 
	};

public:
	class Iterator {
	private:
		
		Iterator(Node* node): node(node) {}

	public:
		Iterator() {}
		Iterator& operator++() {
			node = node->next;
			return *this;		
		}
		Iterator operator++(int) {
			Iterator temp = *this;
			node = node->next;
			return temp;
		}
		int& operator*() {
			return node->value;
		}

		bool operator==(const Iterator& other) {
			return other.node == this->node;
		}
		bool operator!=(const Iterator & other) {
			return!(*this == other);
		}
	private:
		Node* node = nullptr;
		friend List;
	};
	List() {
		ferst.node = new Node();
		last.node = ferst.node;
	}
	List(const List& other) : List() {
		for (Iterator it = ferst; it != last; ++it) {
			this->push_back(*it);
		}
	}

	Iterator insert(const Iterator& position, const int number) {
		if (this->empty()) {
			Iterator newNode(new Node(number, nullptr, position.node));
			position.node->prev = newNode.node;
			ferst = newNode;
			return newNode;
		}
		Iterator follow = position;
		++follow;
		Iterator newNode(new Node(number, position.node, follow.node));
		position.node->next = newNode.node;
		follow.node->prev = newNode.node;
		return newNode;

	}
	Iterator push_back(int number) {
		if (this->empty()) return this->insert(Iterator(last), number);
		return this->insert(Iterator(last.node->prev), number);
	}

	bool empty() {
		return ferst == last;
	}

	Iterator begin() {
		return ferst;
	}
	Iterator end() {
		return last;
	}
	~List() {
		Iterator it2 = ferst;
		for (Iterator it = ferst; it != last;) {
			it2 = it;
			++it;
			delete it2.node;
		}
		delete last.node;
	}

private: 
	Iterator ferst;
	Iterator last;
};

int main() {
	List l;
	int size, value;
	std::cin >> size;
	for (int i = 0; i < size; ++i) {
		std::cin >> value;
		l.push_back(value);
	}
	for (auto it = l.begin(); it != l.end(); ++it) {
		std::cout << *it;
		}

}