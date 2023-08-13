#include <iostream>
#include <string>]

using namespace std;

int main() {
	string name = "!!!!Alex!!!!";
	char c = name[5];
	cout << name[4] << c << endl << name.size() <<endl;
	cout << name.substr(4, 4)<<endl;
	cout << name.insert(4, "art");
}