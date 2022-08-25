#include <iostream>

using namespace std;

int main() {
	int n = 10;
	int m = 100;
	// pt is read-only
	int * const pt = &n;

	cout << "1).n = " << n << endl;

	*pt = 20;
	cout << "2).n = " << n << endl;
	pt = &m;
	cout << "*pt = " << *pt << endl;

	return 0;
}
