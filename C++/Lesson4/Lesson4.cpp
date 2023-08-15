#include<iostream>

using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	int mx = max(x, max(y, z));
	int mn = min(x, min(y, z));
	// int md = x + y + z - mx - mn

// need loop!
	if (x == mx) { // if (x > y && x > z)
		cout << "The first is rich\n";
		if (y == mn) // if ( y < x && y < z)
			cout << "The third is midle\n" << "The second is poor";
		else
			cout << "The second is midl\n" << "The third is poor";
	}
	else if (y == mx) {// if (y > y && y > z)
		cout << "The second is rich\n";
		if (x == mn)
			cout << "The third is midl\n" << "The first is poor";
		else
			cout << "The first is midle\n" << "The third is poor";
	}
	else {// if (z > x && z > y)
		cout << "The third is rich\n";
		if (y == mn)
			cout << "The first is midle\n" << "The second is poor";
		else
			cout << "The second is modl\n" << "The first is poor";
	}
}
		
	//	Don't work:
// 	   case x - need constant
// switch (max1) {
//		case x:
//			cout << "x"
//			break;
//		case y:
//			cout << "y";
//			break;
//		case z:
//			cout << "z";
//			break;
//		default:
//				cout << "errr";
//  }
