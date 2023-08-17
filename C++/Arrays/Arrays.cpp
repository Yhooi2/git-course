#include <iostream>

using namespace std;

<<<<<<< HEAD
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
=======
int main() {
	int n = 5;
	//cin >> n;
	int arr[] = { 1, 2, 3, 4, 5 };
	//for (int i = 0; i < n; i++)
		//cin >> arr[i];
	for (int i = n - 1; i >= -100; i--)
		cout << arr[i] << ' ';
>>>>>>> 3a018ae4bb0b5ef2bd773e302f59e823ab44f42c
}