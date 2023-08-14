#include <iostream>

using namespace std;

int main()
{
	int x = 1, x1 = 1, y = 2, z = 3;
	x = y + y * z;
	x1 = (y + y) * z;
	cout << "x = y + y * z = 2 + 2 * 3 = "<< x;
	// Preority * then +
	cout << "\nx = (y + y) * z = (2 + 2) * 3 = " << x1;
	cout << "\nInput y = ";
	cin >> y;
	cout << "Input z = ";
	cin >> z;
	cout << "x = y + y * z = " << y + y * z;
	cout << "\nx = (y + y) * z = " << (y + y) * z;
}
