#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	// 1001 - ��������, � ������� ������  ��� 0 
	// 0001 -� 1 ������ ������ ��� 1 ��������� 0.
	cout << x % 2 << ' ' << (x & 1);
	// ��� ��������� & - false = 0 ��� ����������. x ������ 
}
