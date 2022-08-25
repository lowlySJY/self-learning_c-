#include <iostream>

const int DEPOSIT_BASE = 100;

int main() {
	using namespace std;

	int year = 0;
	double dephne_dep = DEPOSIT_BASE;
	double cleo_dep = DEPOSIT_BASE;

	while (dephne_dep >= cleo_dep) {
		dephne_dep += 0.1 * DEPOSIT_BASE;
		cleo_dep += 0.05 * cleo_dep;
		year++;
	}

	cout << "After " << year << " years, cleo has more" << endl;
	cout << "depa has " << dephne_dep << endl;
	cout << "cleo has " << cleo_dep << endl;

	return 0;
}

