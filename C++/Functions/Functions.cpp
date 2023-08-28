#include<iostream>

using namespace std;
#define ll long long

//// Check if number is prime
bool inPrime(int n) {	
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

// Find a first pair of prime numbers
pair<int, int> solve(int n) {
	for (int i = 2; i < n; i++) {
		if (inPrime(i) && inPrime(n - i))
			//cout << i << ' ' << n - i << endl;
		return pair<int, int>(i, n - i);
	}
	return pair<int, int>(-1, -1);
}

int main() {
	int n;
	cin >> n;

	// Output result
	auto ans = solve(n);
	cout << ans.first << ' ' << ans.second;
}