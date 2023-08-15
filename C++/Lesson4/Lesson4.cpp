#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, y, x1, y1, x2, y2;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	if (x == x1 && y == y1 || x1 == x2 && y1 == y2 || x == x2 && y == y2) {
		cout << "Points are equel";
		return 0;
	}
	float dist01 = sqrt(pow((x - x1), 2) + pow((y - y1), 2));
	float dist12 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	float dist02 = sqrt(pow((x - x2), 2) + pow((y - y2), 2));
	float maxdist = max(dist01, max(dist12, dist02));
	float mindist = min(dist01, min(dist12, dist02));
	float middist = dist01 + dist12 + dist02 - maxdist - mindist;
	double eps = 1e-5;//0,000001
	//if (dist01 == dist12 + dist02 || dist12 <= dist01 + dist02 || dist02 >= dist01 + dist12) {

	if (maxdist == mindist + middist) {
			cout << "It's line";
		return 0;
	}
	// a^2 + b^2 - sum of legs^2
	float sumlegs = pow(mindist, 2) + pow(middist, 2);
	// c^2 = a^2 + b^2
	if (abs(pow(maxdist, 2) - sumlegs) < eps)
		cout << "The right triangle";
	// c^2 > a^2 + b^2
	else if (pow(maxdist, 2) > sumlegs)
		cout << "The obtues triangle";
	// c^2 < a^2 + b^2
	else
		cout << "The acute triangle";
}