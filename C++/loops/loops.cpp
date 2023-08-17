#include <iostream>

using namespace std;

int main()
{
	int min, end, left, right;
	int count = 0;
	int counter = 0;
	int mx = 0;
	cin >> end;// 7
	for (int i = 1; i <= end; i++)
		// 1;2;3;4;5;6;7;8...
	{
		min = count; 
		// min = 0;1;2;1;2;3;4;1...
		cin >> count;
		// input count = 1;2;1;2;3;4;1...
		min < count ? ++counter : counter = 1;
		// if 0 < count; conter = +1; else conter = 1;   1; 2; 1; 2; 3; 4; 1...
		if (mx < counter)
			// 0 < 1; 1 < 2; 2 < 1; 2 < 2; 2 < 3; 3 < 4; 3 <1...
		{
			left = i + 1 - counter;
			// 1; 2; -; -; 5 + 1 - 3 = 3; 3; -...
			right = i;
			// = 1; 2; -; -; 5; 6; - ...
		}
		mx = max(mx, counter);
		// = 1; 2; 2; 3; 4; 4...
	} 
	cout << mx << ' ' << left << ' ' << right;
}