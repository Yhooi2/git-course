#include <iostream>
#include <string>]
#include <iomanip>

using namespace std;

int main() {
	float f = 1.55, f2;
	int x, y=2;
	x = static_cast<int> (f);
	f2 = int(y);
	cout << float(x) << endl << f2  << endl;
	cout << fixed;
	cout << setprecision(7) << f;
	
}