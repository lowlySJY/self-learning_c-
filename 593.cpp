#include <iostream>

int main() {
	using namespace std;
	double num, sum = 0;
	do {
		cout << "enter the number: ";
		cin >> num;
		sum += num;
	}
	while (num != 0);

	cout << "sum = " << sum << endl; 
	return 0;
}
