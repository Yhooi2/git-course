#include <iostream>
#include <string>]

using namespace std;

int main() {
	string name = "135";
	int x = 345;
	int y = stoi(name);
	int z = x + y;
	name = to_string(x) + "00";
	cout << y+1 << endl << name << endl << z;
}