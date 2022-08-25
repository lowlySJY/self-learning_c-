#include <iostream>
#include <string>

using namespace std;

struct patrons {
	string name;
	double donation;
};

int main() {
	int number;
	patrons *pp;
	bool empty = true;
	cout << "Please enter the number of donors:";
	cin >> number;
	cin.get();
	pp = new patrons[number];


	for (int i = 0; i < number; i++) {
		cout << "donor #" << i + 1 << ": " << endl;
		cout << "Enter the name of donor" << endl;
		getline(cin, pp[i].name);
		cout << "Eneter the donation" << endl;
		cin >> pp[i].donation;
		cin.get();
	}


	cout << "*****Grand Patrons******\n";
	for (int i = 0; i < number; i++) {
		if (pp[i].donation >= 10000) {
			cout << pp[i].name << ": " << pp[i].donation << endl;
			empty = false;
		}
	}

	if (empty) cout << "None" << endl;

	cout << "*****Patrons*****\n";
	for (int i = 0; i < number; i++) {
		if (pp[i].donation < 10000) {
			cout << pp[i].name << ": " << pp[i].donation << endl;
		}
	}

	return 0;
}
