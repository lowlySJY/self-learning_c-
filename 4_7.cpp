#include <iostream>

int main() {
	using namespace std;
	int  nights = 1001;
	int *pt = new int;
	*pt = 1001;
	cout << "Value : " << nights << " location: " << &nights << endl;
	cout << "int value = " << *pt << " location: " << pt << endl;

	double *pd = new double;
	*pd = 10000.2;
	cout << "double value = " << *pd << " location: " << pd << endl;

	cout << "location of address " << &pd << endl;
	return 0;
}
