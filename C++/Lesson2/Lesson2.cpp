#include <iostream>

using namespace std;

int main()
{
	string name;
	cin >> name;
	// balex
	name[0] = char((int)name[0] - 'a' + 'A');
	//b - a = 1 + A = B
	cout << name;
	name[0] = char((int)name[0] - 'A' + 'a');
	cout << endl << name;
}
