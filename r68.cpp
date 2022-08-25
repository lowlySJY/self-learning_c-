#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	ifstream inFile;
	string filename;
	char ch;
	int count = 0;

	cout << "Enter filename:" << endl;
	getline(cin, filename);

	inFile.open(filename);
	if(!inFile.is_open()) {
		cout << "Failed to open file!" << endl;
		exit(EXIT_FAILURE);
	}

	while(!inFile.eof()) {
		inFile >> ch;
		count++;
	}
	cout << filename << " has " << count << " characters." << endl;
	inFile.close();

	return 0;
}
