#include <iostream>
#include <cstring>

struct Pizza {
	char company[20];
	float diameter;
	float weight;
};

int main() {
	using namespace std;

	Pizza dinner;
	cout << "enter the company: ";
	cin.getline(dinner.company, 20);
	cout << "enter the size: ";
	cin >> dinner.diameter;
	cout << "enter the weight: " ;
	cin >> dinner.weight;

	cout << "Pizza company: " << dinner.company << " weight: " << dinner.weight << " diametet: " << dinner.diameter << endl;


	return 0;
}
