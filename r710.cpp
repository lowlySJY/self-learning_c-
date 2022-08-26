#include <iostream>

using namespace std;

double add(double x, double y);
double subtract(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));

int main() {
	double res = calculate(2.5, 10.4, add);
	cout << "The res of add: " << res << endl;
	res = calculate(2.5, 10.4, subtract);
	cout << "The res of subtract: " << res << endl;
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double subtract(double x, double y)
{
	return x - y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
	return pf(x, y);
}
