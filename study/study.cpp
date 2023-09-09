#include <iostream>
#include <functional>
#include <algorithm>

/*
bool srt(int x, int y) {
	return x > y;
}
*/
int main() {

	int array[10] = { 1, 5, 4, 9, 7, 6, 0, 8 };
	std::sort(array, array + 8, [](int x, int y) {return x > y; });
	for (int i = 0; i < 8; i++) {
		std::cout << array[i] << ' ';
	}
	

}