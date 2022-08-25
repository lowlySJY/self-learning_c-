#include <iostream>
double convert(double);
using namespace std;
int main(void) 
{
	double c,f;

	cout << "Please enter a Celesius Value:" << endl;
	cin >> c;
	f = convert(c);
	cout << c << " degree Celesius = " << f << endl;
}

double convert(double c)
{
	double f;
	f = 1.8 * c + 32;
	return f;
}
