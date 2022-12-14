#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = {"spring", "summer", "fall", "winer"};

void fill(array<double, Seasons> *pa);
void show(array<double, Seasons> da);

int main() {
	array<double, Seasons> exp;

	fill(&exp);

	show(exp);

	return 0;
}

void fill(array<double, Seasons> *pa)
{
	for (int i = 0; i < Seasons; i++) {
		cout << "Enter expenses of " << Snames[i] << ": " << endl;
		cin >> (*pa)[i];
	}
}

void show(array<double, Seasons> da)
{
	double total = 0.0;
	cout << "Total expense: "<< endl;
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total expenses: " << total << endl;
}
