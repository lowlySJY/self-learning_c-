#include <iostream>

using namespace std;
const int Max = 5;
int fill_array(double*, int);
void show_array(const double arr[], int n);

void revalue(double r, double arr[], int n);

int main() {
	double pro[Max];
	int size = fill_array(pro, Max);
	show_array(pro, size);

	if (size > 0) {
		cout << "Enter revaluation factor: ";
		double factor;
		while(!(cin >> factor)) {
			cin.clear();
			while(cin.get() != '\n') continue;
			cout << "Bad input" << endl;
		}
		revalue(factor, pro, size);
		show_array(pro, size);
	}

	return 0;
}


int fill_array(double arr[], int limit) {
	double temp;
	int i = 0;
	for (i; i < limit; i++) {
		cout << "Enter value #" << i+1 << ": ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while(cin.get() != '\n') continue;
			cout << "Bad input: input process terminated." << endl;
			break;
		} else if (temp < 0)
			break;
		arr[i] = temp;
	}
	return i;
}

void show_array(const double arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Property #" << i+1 << ": $";
		cout << arr[i] << endl;
	}

}

void revalue(double r, double arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] *= r;
	}
}
