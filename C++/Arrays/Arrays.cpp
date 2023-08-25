#include <iostream>
#include <algorithm>

using namespace std;

int arr[50];
int n; 
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
			cin >> arr[i];

	sort(arr, arr + n);
	reverse(arr, arr + n);
	auto adress = unique(arr, arr + n);
	for (int i = 0; i < adress - arr; i++)
		cout << arr[i];

}