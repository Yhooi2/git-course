#include <iostream>

using namespace std;

int main()
{
	int count;
	int sum = 0;
	do {
		cin >> count;
		sum += count;
	} while (count != 0);
	cout << sum;		
}