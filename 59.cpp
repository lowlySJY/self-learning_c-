#include <iostream>

int main() {
	using namespace std;

	int arr[10] = {2, 2, 2, 2, 2, 1, 5, 6, 7, 9};
	cout << "Doing it right: " << endl;
	int i;
	for (int i = 0; arr[i] == 2; i++){
		cout << "arr " << i << "is a 2." << endl;
	}
	return 0;
}
