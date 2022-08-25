#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

struct patrons {
	string name;
	double donation;
};

int main() {
	int number;
	patrons *pp;
	bool empty = true;
	string filename;
	ifstream inFile;

	cout << "Please enter the filename:";
	getline(cin, filename);
	inFile.open(filename);
	if (!inFile.is_open()) {
		cout << "Failed to open the file!" << endl;
		exit(EXIT_FAILURE);
	}

	inFile >> number;
	if (number <= 0) exit(EXIT_FAILURE);
	pp = new patrons[number];
	inFile.get();

	int i = 0;
	while (!inFile.eof() && i < number) {
		getline(inFile, pp[i].name);
		cout << "Read name: " << pp[i].name << endl;
		inFile >> pp[i].donation;
		inFile.get();
		cout << "Donation: " << pp[i].donation << endl;
		i++;
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
