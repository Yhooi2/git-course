#include <iostream>
#include <string>]

using namespace std;
struct Animals {
	int legs = 4;
	string type = "";
	string name = "";
};
struct Position {
	double x = 0, y = 0;
};

int main() {
	Animals cat = { 4,"britanec", "Barsic" };
	Position Moscow = { 100.5, 100.2 }, London = { 150.1, 300.6 };
	cout << cat.legs << ' ' << cat.type << ' ' << cat.name << endl;
	cout << Moscow.y << ' ' << London.y << endl << sizeof(Moscow);
}