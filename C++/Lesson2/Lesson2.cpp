#include <iostream>

using namespace std;

int main()
{
	int x;
	// size int = 2*10^9
	cin >> x;
	cout << ((x / 1000 == x % 10) && (x / 100 % 10 == x / 10 % 10)) << endl;
	cout << x / 100 % 10 << ' ' << x / 10 % 10 << ' ' << x % 10;
	
}