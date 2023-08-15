#include <iostream>

using namespace std;

int main()
{
	int end;
	cin >> end;
	//for (int i = end -1 ; i > 0; --i)
	while (end-- > 0)
		cout << end << ' ';
}