#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 100;
string s;
bool flage[SIZE];

void permutation(const int& n, const string& temp) {
	if (s.size() == n)
		cout << temp << endl;

	for (int i = 0; i < s.size(); i++) {
		if (!flage[i]) {
			flage[i] = true;
			 permutation(n + 1, temp + s[i]);
			flage[i] = false;
		}			
	}
	return;
}

using namespace std;

int main() {
	
	cin >> s;
	sort(s.begin(), s.end());

	permutation(0, "");
}

