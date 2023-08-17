#include <iostream>

using namespace std;

int arr[50];

int main() {
	int n,near, mn = 9e5;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (abs(n - arr[i]) < mn)
		{
			mn = abs(n - arr[i]);
			near = arr[i];
		}
	}
	cout << near;
}