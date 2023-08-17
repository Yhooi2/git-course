#include <iostream>

using namespace std;

int main()
{
	long long number;
	cin >> number;
	for (int i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			cout << i;
			return 0;
		}
	}
}