#include <algorithm> // for_each(.begin(), end(), [](){})
#include <iostream>
#include <list> // .rbegin() .rend()
#include <string>
#include <forward_list> 
#include <stack> // .push() .pop() .top() .empty()
#include <queue> // .push() .pop() .front() -  preority_queue <int, vector<int>, gtreater<int> top
#include <deque> // .pop_back(); .pop_front(); . shrink_to_fit(); [] ferts insert for begin
#include <vector>//.capacity();
#include <set>// set<>, multuset<> .insert(), .lower_bound(), .upper_bound(), .find(), .count(3) 
#include <unordered_set> //
#include <map> // it->first, it->second, multimap<T,T>  mmp ={{}{}} map<T,T>  mp[T]= T .counter
#include <unordered_map> //unordered_multimap<>


int main() {
	std::unordered_map<std::string, int> ump = {
		{"Alex", 10},
		{"Maria", 100},
		{"Art", 200},
		{"Maria", 140}
	};
	for (auto it = ump.begin(); it != ump.end(); ++it) {
		std::cout << it->first << ' ' << it->second << '\n';
	}

	std::multimap<std::string, int> mmp = {
		{"Alex", 10},
		{"Maria", 100},
		{"Art", 200},
		{"Maria", 140}
	};
	for (auto it = mmp.begin(); it != mmp.end(); ++it) {
		std::cout << it->first << ' ' << it->second << '\n';
	}

	//            Key    value
	std::map<std::string, int> mp;
	mp["Art"] = 10;
	mp["Serg"] = 100;
	mp["Marry"] = 1000;
	mp["Art"] = 1500;

	for (auto it = mp.begin(); it != mp.end(); ++it) {
		std::cout << it->first << ' ' << it->second << '\n';
	}
	std::cout << mp.count("Art") << '\n';



	std::unordered_set<int> ust = { 1, 3, 2, 5, 4, 3, 2, 6, };
	ust.insert(8); // insert rundom for unordered_set
	for (auto it = ust.begin(); it != ust.end(); ++it) {
		std::cout << *it << ' ';
	}

	std::multiset<int> st = { 1, 3, 2, 5, 4, 3, 2, 6, }; // multiset - set with repetition
	st.insert(2); 
	std::cout << *(st.lower_bound(2)) << ' ' << *(st.upper_bound(2)) <<'\n';//lb >=, ub >

	for (auto it = st.find(2); it != st.upper_bound(5); ++it) {
		std::cout << *it << ' ';
	}	
	auto iter = st.find(2);
	std::cout << st.count(3) << "    " << *iter << '\n';
	

	std::priority_queue<int, std::vector<int>, std::greater<int>> q;
		for (int i = 0; i < 5; ++i) {
			q.push(9 - i);
		}// po ubivaniy s greater po vozrastaniy
		while (!q.empty()) {
			std::cout << q.top() << '\n';
			q.pop();
		}

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