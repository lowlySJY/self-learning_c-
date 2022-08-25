#include <iostream>

long double probability(unsigned numbers, unsigned picks);

using namespace std;

int main() {
	double total, choices;
	cout << "Enter the total number of choice on the game card and the number of picks allowed:" << endl;
	while (cin >> total >> choices && choices <= total) {
		cout << "You have one chance in ";
		cout << probability(total, choices);
		cout << " of winning." << endl;
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Bye\n";
	return 0;
}

long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	return result;

}
