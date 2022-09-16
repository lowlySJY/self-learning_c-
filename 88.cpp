#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);

const int LIMIT = 5;
int main(){
	fstream fout;
	const char *fn = "ep-data.txt";
	fout.open(fn);
	if(!fout.is_open()) {
		cout << "Can't open " << fn << endl;
		exit(EXIT_FAILURE);
	}
	double obj;
	cout << "Enter the focal length of your telescope objective in mm: ";
	cin >> obj;
	double eps[LIMIT];
	for (int i = 0; i < LIMIT; i++) {
		cout << "EyePieces #" << i+1 << ": ";
		cin >> eps[i];
	}
	file_it(cout, obj, eps, LIMIT);
	file_it(fout, obj, eps, LIMIT);

	cout << "Done" << endl;


	return 0;
}

void file_it(ostream & os, double fo, const double fe[], int n)
{
	os << "Focal length of objective: " << fo << endl;
	os << "f.1. eyepieces" << " magnification" << endl;
	for (int i = 0; i < n; i++) {
		os << fe[i] << "\t" << int(fo / fe[i] + 0.5) << endl;
	}
}
