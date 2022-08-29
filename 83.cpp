#include <iostream>

using namespace std;

int main() {
	int rats = 101;
	int & rodents = rats;
	cout << "rats = " << rats << endl;;
	cout << "rodents = " << rodents << endl;

	cout << "rats address " << &rats << endl;;
	cout << "rodents address " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;
	cout << "rodents = " << rodents << endl;
	cout << "bunnies = " << bunnies << endl;
	cout << "rats = " << rats << endl;

	cout << "rats address " << &rats << endl;;
	cout << "rodents address " << &rodents << endl;
	cout << "bunnies address " << &bunnies << endl;
	return 0;

}
