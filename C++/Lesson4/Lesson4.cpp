#include <iostream>

using namespace std;

int main()
{
	for (int i = 10; i < 100 ; i++)// index usually == 0 and <;
	{
		if(i % 7 == 0)
		cout << i << ' ';
	}
}