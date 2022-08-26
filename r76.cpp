#include <iostream>

using namespace std;

const int MAX = 40;

int fill_array(double arr[], int n);

void show_array(double arr[], int n);

void reverse_array(double *, int);

int main() {
	double array[MAX];

	int size = fill_array(array, MAX);
	show_array(array, size);

	reverse_array(array+1, size-2);
	show_array(array, size);

	return 0;
}

int fill_array(double arr[], int n)
{
	double temp;
	int i;
	for(i = 0; i < n; i++){
		cout << "Enter golf score, No." << i + 1 << ": ";
		cin >> temp;
		if(!cin) {
			cin.clear();
			while(cin.get() != '\n');
			break;
		}
		arr[i] = temp;

	}
	return i;
}

void show_array(double arr[], int n)
{
	cout << "the array content: " ;
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
		}
	cout << endl;
}

void reverse_array(double arr[], int n)
{
	double temp;
	for(int i = 0; i < n / 2; i++) {
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}

}
