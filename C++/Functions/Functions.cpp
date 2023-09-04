#include <iostream>
#include <string>

int main() {
	int n = 22222;
	std::string s,
		s2 = std::to_string(n);

	std::cin >> s;
	s.erase(s.size() - 2);//, s.size());
	s.insert(s.size(), "em");
	std::cout << (s > s2) << std::endl;
	std::cout << std::endl << s << ' ';
	std::cout << s2.substr(0, 3) << ' ' << s2;//1, 2)
}
