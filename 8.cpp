#include <iostream>

int main(void)
{
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);

	float tub = 10.0 / 3.0;
	const float million = 1.0E6;

	cout << "tub = " << tub << endl;
	cout << "A million tub = " << tub * million << endl;

	double mint = 10.0 / 3.0;
	cout << "mint = " << mint << endl;
	cout << "A million mint = " << mint * million << endl;
	cout << "million * million mint = " << mint * million * million << endl;

	return 0;
}
