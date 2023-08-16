#include <iostream>

using namespace std;

int main()
{
	int coint = 1;
	cin >> coint;
	while (coint % 10 == 0 && coint != 0)
		coint /= 10;
	cout << coint;
}