#include <iostream>

struct CandyBar {
	char brand[20];
	float weight;
	unsigned int calorie;
};

int main() {
	using namespace std;
	CandyBar snack = {"Mocha Munch", 2.3, 350};

	cout << "Brand: " << snack.brand << endl;
	cout << "weight: " << snack.weight << endl;
	cout << "calorie: " << snack.calorie << endl;
	return 0;
}
