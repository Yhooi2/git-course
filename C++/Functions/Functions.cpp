#include <iostream>

using namespace std;


int min(int a, int b) {
	if (a > b) return b;
	return a;
}
void printf(string n) {
	cout << n;
}
int pow(int a, int b) {
	int c = 1;
	for (int i = 0; i < b; i++) {
		c = c * a;
	}
	return c;
}
int abs(int a) {
	if (a < 0) 
		return -a;
	return a;
}
void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;

}
//int  transpose() {

//}

int main() {
	int x = 2, y = 3, z = -3;
	printf("Hello Word!\n");
	cout << min(x, y) << ' ' << pow(y, x) << endl << abs(z) << endl;
	swap(x, y);
	cout << x << ' ' << y;
}