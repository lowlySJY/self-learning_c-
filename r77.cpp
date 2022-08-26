#include <iostream>

using namespace std;
const int Max = 5;

double * fill_array(double *begin, double *end);

void show_array(double *begin, double * end);

void revalue(double r, double * begin, double * end);

int main() {
	double pro[Max];
	double * a = fill_array(pro, pro + Max);
	show_array(pro, pro + Max);

	if (a - pro > 0) {
		cout << "Enter revaluation factor: ";
		double factor;
		while(!(cin >> factor)) {
			cin.clear();
			while(cin.get() != '\n') continue;
			cout << "Bad input" << endl;
		}
		revalue(factor, pro, pro + Max);
		show_array(pro, pro + Max);
	}

	return 0;
}


double * fill_array(double *begin, double *end)
{
	double temp;
	double *pt;

	for (pt = begin; pt != end; pt++) {
		cout << "Enter value #" << (pt - begin) + 1 << ": ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while(cin.get() != '\n') continue;
			cout << "Bad input: input process terminated." << endl;
			break;
		} else if (temp < 0)
			break;
		*pt = temp;
	}
	return pt;
}

void show_array(double *begin, double * end) {
	for (double *pt = begin; pt != end; pt++) {
		cout << "Property #" << (pt - begin)/ + 1 << ": $";
		cout << *pt << endl;
	}

}

void revalue(double r, double * begin, double * end)
{
	for (double * pt = begin; pt != end; pt++) {
		*pt *= r;
	}
}
