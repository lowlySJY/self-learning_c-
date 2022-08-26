#include <iostream>

long double probability(unsigned numbers, unsigned picks);

using namespace std;

int main() {
	double total, choices;
	long double field = probability(47, 5);
	long double special = probability(27, 1);
	long double result = field * special;
	cout << result << endl;
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
