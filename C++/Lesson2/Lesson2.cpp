#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	cout << (max(x, y) % min(x, y) == 0);
	//cout << (( x % y == 0) || (y % x ==0));
}
