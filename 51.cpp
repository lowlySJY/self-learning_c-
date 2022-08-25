#include <iostream>

int main() {
	using namespace std;
	cout << "Enter the value:";
	float limit;
	cin >> limit;
	for (float i = limit; i; i--) {
		cout << "i = " << i << endl;
	}
	cout << "Done" << endl;

	return 0;
}
