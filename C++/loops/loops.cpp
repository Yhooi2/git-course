#include <iostream>

using namespace std;

int main()
{
	int end, x;
	int max = -1000;
	int min = 1000;
	cin >> end;
	for (int i = 0; i < end; i++)// index usually == 0 and <;
	{
		cin >> x;
		if (max < x)
			max = x;
		if (min > x)
			min = x;
	}
	cout << max << ' ' << min;
}