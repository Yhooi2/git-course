#include <iostream>

using namespace std;

int main() {
	int n = 5;
	//cin >> n;
	int arr[] = { 1, 2, 3, 4, 5 };
	//for (int i = 0; i < n; i++)
		//cin >> arr[i];
	for (int i = n - 1; i >= -100; i--)
		cout << arr[i] << ' ';
}