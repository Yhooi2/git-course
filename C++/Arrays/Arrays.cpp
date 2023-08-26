#include <iostream>
#include <algorithm>

using namespace std;

int arr[50];

int main()
{
	int number_digits, number_operations, begin, end, change;
	char operation;

	cout << "\nEnter number of digits: ";
	cin >> number_digits;
	cout << "\n Enter digits: ";
	for (int i = 1; i <= number_digits; i++)
		cin >> arr[i];
	cout << "\nEnter number of operations: ";
	cin >> number_operations;
	for (int i = 1; i <= number_operations; i++)
	{
		cout << "\nEnter operation (+ -sum,a-average,m-max,s-sort,r-reverse,f-find): ";
		cin >> operation;
		cout << "\nEnter begining and end: ";
		cin >> begin >> end;
		switch (operation)
		{
		case '+'://sum
			change = 0;
			for (int j = begin; j <= end; j++)
				change += arr[j];
			cout << change << endl;
			break;
		case 'a'://average
			change = 0;
			for (int j = begin; j <= end; j++)
				change += arr[j];
			cout << double(change) / double(end - begin + 1) << endl;
			break;
		case 'm'://max
			change = 0;
			for (int j = begin; j <= end; j++)
				change = max(arr[j], change);
			cout << change << endl;
			break;
		case 's'://sort
			sort(arr + begin, arr + end +1);
			for (int j = begin; j <= end; j++)
				cout << arr[j];
			break;
		case 'r'://reverse
			reverse(arr + begin, arr + end +1);
			for (int j = begin; j <= end; j++)
				cout << arr[j];
			break;
		case'f': //find
			cout << "\nEnter number for find: ";
			cin >> change;
			for (int j = begin; j <= end; j++)
				if (change == arr[j])
				{
					cout << j;
					break;
				}
		}		
	}
}
