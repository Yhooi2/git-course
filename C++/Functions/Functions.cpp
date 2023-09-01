#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 100;
string s;
int flage[SIZE];

void permutation(const int& n, const string& temp) {

	if (s.size() == n)
		cout << temp << endl;

	for (int i = 0; i < 26; i++) {
		if (flage[i] > 0) {
			--flage[i];
			 permutation(n + 1, temp + (char)((int)'a' + i));
			++flage[i];
		}			
	}
	return;
}

using namespace std;

int main() {
	
	cin >> s;
	sort(s.begin(), s.end());

	for (int i = 0; i < s.size(); i++) {
		++flage[s[i] - 'a'];
	}
	permutation(0, "");
}

