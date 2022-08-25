#include <iostream>

int main() {
	using namespace std;
	int min, max, sum = 0;

	cout << "enter min: ";
	cin >> min;
	cout << "enter max: ";
	cin >> max;

	for (int i = min; i <= max; i++) {
		sum += i;
	}
	cout << "sum = " << sum << endl;

	return 0;
}
