#include <iostream>

using namespace std;

int main()
{
	long long number;
	cin >> number;
	// (sqrt(number)+1) * (sqrt(number)+1) > number
	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			cout << i;
			return 0;
		}
	}
	cout << number;
}