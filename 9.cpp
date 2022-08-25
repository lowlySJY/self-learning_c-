#include <iostream>

int main(void)
{
	using namespace std;
	float a = 2.34E22;
	float b = a + 1.0;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "b - a = " << b - a << endl;

	double c = 2.34E22;
	double d = 2.34E22 + 1;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	return 0;
}
