#include <iostream>

using namespace std;

struct anta
{
	int year;
};

int main() {
	anta s1, s2, s3;

	s1.year = 1998;
	anta * pa = &s2;
	pa->year = 1999;

	anta trio[3]; 
	trio[0].year = 2003;

	cout << trio->year << endl;

	const anta * arp[3] = {&s1, &s2, &s3};
	cout << arp[1]->year << endl;
	cout << (*arp[0]).year << endl;

	const anta **ppa = arp;
	cout << (*ppa)->year << endl;

	auto ppb = arp;
	cout << (*(ppb + 1))->year << endl;

	return 0;
}
