#include <iostream>

using namespace std;

const int MAX = 10;

int fill_golf(double arr[], int n);

void show_golf(double arr[], int n);
double average_golf(double arr[], int n);

int main() {
	double golf[10];

	int size = fill_golf(golf, MAX);

	if(size > 0) {
		show_golf(golf, size);
		cout << "average: " << average_golf(golf, size) << endl;;
	}
	else
		cout << "There is no golf scores\n";

	return 0;
}

int fill_golf(double arr[], int n)
{
	double temp;
	int i;
	for(i = 0; i < MAX; i++){
		cout << "Enter golf score, No." << i + 1 << ": ";
		cin >> temp;
		if(!cin) {
			cin.clear();
			while(cin.get() != '\n') {
				cout << "Invalid input, terminate." << endl;
				break;
			}
		} else if (temp < 0) {
				cout << "Invalid input, terminate." << endl;
				break;
			}
		arr[i] = temp;

	}
	return i;
}

void show_golf(double arr[], int n)
{
	cout << "golf result: " ;
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

double average_golf(double arr[], int n)
{
	double average, sum = 0;
	for(int i = 0; i<n; i++) {
		sum += arr[i];
	}
	average = sum / n;
	return average;
}

