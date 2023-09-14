#include <iostream>
#include <string>]

using namespace std;

enum Color {
	red = 10,
	brown,
	white,
	black
};

struct Animals {
	int legs = 4;
	Color color = black;
	string name = "";
};

int main() {
	Animals cat = { 4, red, "Barsic" };
	cout << cat.legs << ' ' << cat.color << ' ' << cat.name;
}