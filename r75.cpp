#include <iostream>
#include <cmath>

using namespace std;

long long factorial(unsigned int n);

int main() {
	int number;
	long long res;
	cout << "Enter a number for factorial:";
	while(cin >> number) {
		res =factorial(number);
		cout << number << "! = " << res << endl;
		cout << "Enter a number for factorial:";

	}
	return 0;
}

long long factorial(unsigned int n)
{
	if(n== 0) return 1;
	else return n * factorial(n - 1);
}
