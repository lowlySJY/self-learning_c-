#include <iostream>

using namespace std;

int main() {

	double income, tax;
	cout << "Please enter your income:";

	while (cin >>income && income >= 0) {
		if (income <= 5000) tax = 0.0;
		else if (income <= 15000) tax = (income - 5000) * 0.1;
		else if (income <= 35000) tax = (income - 15000) *0.15 + 10000*0.1;
		else tax = 10000*0.1 + 20000*0.15 + (income - 35000) * 0.2;
		cout << "your tax = " << tax << endl;
		

	}


	return 0;
}
