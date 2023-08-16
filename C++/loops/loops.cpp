#include <iostream>

using namespace std;

int main()
{
	int count;
	int phiPrev = 1;
	int phiNext = 1;
	cin >> count; 
	while (phiNext < count) 
	{
		phiNext = phiNext + phiPrev; // 1 + 1, 2 + 1, 3 + 2...
		phiPrev = phiNext - phiPrev; // 2 - 1 = 1, 3 - 1 = 2...
	}
	cout << count << ((phiNext == count) ? " - it's fibonacci number" : " - it isn't fibonacci numder");
}