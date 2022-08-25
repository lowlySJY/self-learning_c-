#include <iostream>

using namespace std;

int main() {
	int n = 10;
	int m = 100;
	// *pt point value can't revised by *pt
	const int * pt = &n;
	cout << "1).n = " << n << endl;

	n = 20;
	pt = &m;
	cout << "2).n = " << n << endl;
	cout << "*pt = " << *pt << endl;

	return 0;
}
