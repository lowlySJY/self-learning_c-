#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = {"spring", "summer", "fall", "winer"};

struct spend {
	double money[Seasons];
};

void fill(double arr[], int size);

void show(const double arr[], int size);

int main() {

	spend exp;

	fill(exp.money, Seasons);

	show(exp.money, Seasons);

	return 0;
}

void fill(double arr[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << "Enter expenses of " << Snames[i] << ": " << endl;
		cin >> arr[i];
	}
}

void show(const double arr[], int size)
{
	double total = 0.0;
	cout << "Total expense: "<< endl;
	for (int i = 0; i < Seasons; i++) {
		cout << Snames[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total expenses: " << total << endl;
}
