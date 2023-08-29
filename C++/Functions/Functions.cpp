#include<iostream>

const int SIZE = 100;

using namespace std;

//Input Array
void enterArray(int arr[SIZE], const int& n) {

	if (n < 0) return;
	cin >> arr[n];
	enterArray(arr, n - 1);

}

// Print Arroy
void printArray(int(arr)[SIZE], const int& n) {

	if (n < 0) {
		cout << endl;
		return;
	}
	cout << arr[n] << ' ';
	printArray(arr, n - 1);
}

// buble sort
void sortArray(int arr[SIZE],const int& n) {
	
	bool flage = true;
	do {
		flage = false;
		for (int i = 0; i < n; i++) {
			if (arr[i] < arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				flage = true;
			}
		}
	} while (flage); 
}

// conter unique nombers and 
int unique(int arr[SIZE], const int& n) {
	int counter = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] != arr[i + 1]) {
			counter++;
			arr[counter] = arr[i + 1];
		}
	}
	return counter;
}

// revers Array
void reversArray(int arr[SIZE], const int& n) {
	
	for (int i = 0; i < n / 2; i++) {
		swap(arr[i], arr[n - i]);
	}
	return;
}

int main() {

	int arr[SIZE];
	int countity;
	cin >> countity;
	countity--; // becouse index array start with 0

	enterArray(arr, countity);
	sortArray(arr, countity);
	printArray(arr, countity);

	int newSize = unique(arr, countity);
	reversArray(arr, newSize);
	printArray(arr, newSize);
}