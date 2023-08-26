#include <iostream>

using namespace std;

struct Numbers
{
	int number;
	string name;
};

Numbers catalog[100];
int main()
{
	// input directory
	int size;
	cout << "Enter size of catalog: ";
	cin >> size;

	for (int i = 0; i < size; i++) {
		cout << "\nEnter phone number " << i+1 << ": ";
		cin >> catalog[i].number;
		cout << "\nEnter name " << i+1 << ": ";
		cin >> catalog[i].name;
	}

	// Search the cataloge for a name by phone number
	int look;

	do {
		cout << "\nEnter number to look for (0 to exit): ";
		cin >> look;
		bool found = false;

		for (int i = 0; i < size; i++) {
			if (look == catalog[i].number) {
				cout << catalog[i].name;
				found = true;
			}
		}
		if (!found)
			cout << "Number not name";
	} while (look != 0);
	return 0;
}