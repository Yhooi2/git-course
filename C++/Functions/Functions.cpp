#include <iostream>

const int SIZE = 100;

using namespace std;

// Enter array
void funcFor(int arr[], const int& start, const int& end, int step = 1) {

	cin >> arr[start];
	if (start < end)
		funcFor(arr, start + step, end); // recursion after
	return;
}

// Print revers array
void printReversFor(int arr[], const int& start, const int& end,const int& step = 1) {

	if (start < end)
		printReversFor(arr, start + step, end); // recursion before
	cout << arr[start] << ' ';
	return;
}

// Sum array
int sumArray(int arr[], const int& start, const int& count) {

	if (count < start) return 0; // recursion sum
	return arr[count] + sumArray(arr, start, count - 1);
}

// Sum Digits
int sumDigits(const int& n) {
	if (n == 0) return 0;
	return n % 10 + sumDigits(n / 10);
}

// find fibonacci nomber
int fibonacci(const int& n, int x = 1, int y = 1) {
	if (n == 0) return y;
	return fibonacci(n - 1, y, x + y);
	//1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597
	//0 1 2 3 4 5  6  7  8  9 10  11  12  13  14  15  16
}

int main() {

	int arr[SIZE];
	int start, end;

	cout << "Enter size array: ";
	cin >> end;
	end--;

	// Enter array
	cout << "Inpot array: ";
	funcFor(arr, 0, end);
	cout << endl << "Enter start and finish array: ";
	cin >> start >> end;
	end--;

	// Print cat revers array
	printReversFor(arr, start, end);
	cout << endl;

	// Print sum cat array
	cout << sumArray(arr, start, end) << endl;

	// Print sum digits of sum cat array
	int sum = sumDigits(sumArray(arr, start, end));
	cout << "Sum digits:\n" << sum << endl;

	// Print Fibonacci nomber this sum
	cout << "Fibonacci nomber: " << fibonacci(sum - 1) << endl;
}