#include <iostream>
#include <cstring>
struct CandyBar {
	char brand[20];
	float weight;
	unsigned int calorie;
};

int main() {
	using namespace std;
	CandyBar *pt = new CandyBar[3];
	//CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}, {"Flip", 3.2, 500},{"Michle Bay", 4.3, 400}};
//	pt[0] = {"MOcha", 2.3, 350};
	strcpy(pt[0].brand, "MOCha");
	pt[0].weight = 2.3;
	pt[0].calorie = 350;
	strcpy(pt[1].brand, "MFlp sl");
	pt[1].weight = 3.2;
	pt[1].calorie = 400;
	strcpy(pt[2].brand, "Micheal sdlf");
	pt[2].weight = 3.5;
	pt[2].calorie = 450;

	cout << "Brand: " << pt[0].brand << endl;
	cout << "weight: " << pt[0].weight << endl;
	cout << "calorie: " << pt[0].calorie << endl;
	cout << "Brand: " << pt[1].brand << endl;
	cout << "weight: " << pt[1].weight << endl;
	cout << "calorie: " << pt[1].calorie << endl;
	cout << "Brand: " << pt[2].brand << endl;
	cout << "weight: " << pt[2].weight << endl;
	cout << "calorie: " << pt[2].calorie << endl;

	delete [] pt;
	return 0;
}
