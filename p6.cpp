#include <iostream>

struct CandyBar {
	char brand[20];
	float weight;
	unsigned int calorie;
};

int main() {
	using namespace std;
	CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Flip", 3.2, 500},{"Michle Bay", 4.3, 400}};

	cout << "Brand: " << snack[0].brand << endl;
	cout << "weight: " << snack[0].weight << endl;
	cout << "calorie: " << snack[0].calorie << endl;
	cout << "Brand: " << snack[1].brand << endl;
	cout << "weight: " << snack[1].weight << endl;
	cout << "calorie: " << snack[1].calorie << endl;
	cout << "Brand: " << snack[2].brand << endl;
	cout << "weight: " << snack[2].weight << endl;
	cout << "calorie: " << snack[2].calorie << endl;


	return 0;
}
