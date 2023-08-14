#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	// 1001 - побитово, у четного первый  бит 0 
	// 0001 -у 1 только первый бит 1 остальное 0.
	cout << x % 2 << ' ' << (x & 1);
	// при побитовом & - false = 0 нет совпадений. x четный 
}
