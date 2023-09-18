#include <algorithm> // for_each(.begin(), end(), [](){})
#include <iostream>
#include <list>
#include <forward_list> 
#include <stack> // .push() .pop() .top() .empty()
#include <queue> // .push() .pop() .front()
#include <deque> // .pop_back(); .pop_front(); . shrink_to_fit(); [] ferts insert for begin
#include <vector>


int main() {

	std::vector<int> vec;
	for (int i = 0; i < 100; ++i) {
		vec.push_back(i);
	}
	std::cout << vec.capacity() << '\n';

	for (int i = 0; i < 50; ++i) {
		vec.push_back(i);
	}
	std::cout << vec.capacity() << '\n';

	std::deque<int> deq = { 0,1,2,3,4,5,6 };
	deq.pop_back();
	deq.pop_front();
	deq.shrink_to_fit();
	std::cout << deq[0] << deq[4] << '\n';


	std::queue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);

	while (!que.empty()) {
		std::cout << que.front() << '\n';
		que.pop();
	}

	std::stack <int> stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);

	while(!stk.empty()) {
		std::cout << stk.top() << '\n';
		stk.pop();
	}
	
	std::forward_list<int> lis = { 1, 2, 3 };

	auto it = lis.begin();
	++it;
	std::cout << *(++it);// --it error becouse forward lost

	//
	std::list<int> l = { 1, 2, 3 };

	for (auto it = l.rbegin(); it != l.rend(); ++it) {// revers  --it list
		std::cout << *it;
	}
	int number;
	std::cin >> number;
	std::for_each(l.begin(), l.end(), [](const auto& elem) {std::cout << elem << ' '; });
	std::for_each(l.begin(), l.end(), [&number, &l](auto& elem) { elem += number; std::cout << elem << ' '; });
	
	for (auto it = l.begin(); it != l.end(); ++it) {
		*it = 5;
		
	}
	for (auto elem : l) {
		elem = 7;
		
	}
	for (const auto& elem : l) {
		std::cout << elem << ' ';
	}
	for (auto& elem : l) {
		elem = 6;
	}
	for (const auto& elem : l) {
		std::cout << elem << ' ';
	}


}