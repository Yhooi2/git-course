#include<iostream>

using namespace std;

unsigned long long int factorial(int n) {
	if (n == 0) return 1;
	return n * factorial(n - 1);
}

unsigned long long int C(int n, int k) {
		return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {

// C = n! / (k! * (n - k)!)
	int n, k;

	do {
		cin >> n >> k;
	} 
	while (n < k);

	cout << C(n, k);
}