#include <iostream>
#include <ctime>

int main() {
	using namespace std;

	cout << "Enter the delay time: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	clock_t start = clock();
	while (clock() - start < delay) {
		cout << clock() << endl;
	}
	cout << "done" << endl;

	return 0;
}
