#include <iostream>

int main() {
	using namespace std;

	int year;

	cout << "what year " << endl;
	cin >> year;
	//cin.get();

	cout << "what min " << endl;
	int min;
	cin >> min;
	cout << "year is " << year << "min is " << min << endl;

	cout << "what is street address?" << endl;
	char address[80];
	cin.getline(address, 80);
	cout << "Address: " << address << endl;
	return 0;
}
