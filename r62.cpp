#include <iostream>
#include <array>

int main() {
	using namespace std;

	array<double, 10> donation;
	double input;
	double sum = 0;
	double average;
	int count = 0;
	int  i = 0;
	cout << "Please enter the double numerial:";


	while (cin >> input && count < 10) {
		donation[count++] = input;
		sum += input;
		cout << "Please enter the double numerial:";
	}

	average = sum / count;
	int bigger = 0;
	for (int j = 0; j < count; j++) {
		if (donation[j] > average) {
			bigger++;
		}
	}

	cout << "average = " << average << endl;
	cout << "there is " << bigger << " numbers bigger than average." << endl;
	return 0;
}
