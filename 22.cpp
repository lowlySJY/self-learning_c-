#include <iostream>

struct inflatable {
	char name[20];
	float volume;
	double price;
};

int main() {
	using namespace std;
	inflatable *ps = new inflatable;
	cout << "enter the name: ";
	cin.get(ps->name, 20);
	cout << "enter the volume: ";
	cin >> ps->volume;
	cout << "enter the price: ";
	cin >> ps->price;

	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << endl;
	cout << "Price: " << ps->price << endl;

	delete ps;

	return 0;
}
