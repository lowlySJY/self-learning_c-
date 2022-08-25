#include <iostream>
#include <cstring>

struct Pizza {
	char company[20];
	float diameter;
	float weight;
};

int main() {
	using namespace std;

	Pizza *pt = new Pizza;

	cout << "enter the company: ";
	cin.getline(pt->company, 20);
	cout << "enter the size: ";
	cin >> pt->diameter;
	cout << "enter the weight: " ;
	cin >> pt->weight;

	cout << "Pizza company: " << pt->company << " weight: " << pt->weight << " diametet: " << pt->diameter << endl;

	delete pt;

	return 0;
}
