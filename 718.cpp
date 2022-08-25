#include <iostream>

using namespace std;

double betsy(int lines);
double pam(int lines);
void estimate(int lines, double (*pf)(int));

int main() {
	int code;
	cout << "How many line of code do you need? ";
	cin >> code;
	cout << "Here's Betsy's estimate: " << endl;
	estimate(code, betsy);
	cout << "Here's Pam's estimate: " << endl;
	estimate(code, pam);
	return 0;
}

double betsy(int lines)
{
	return lines * 0.5;
}

double pam(int lines)
{
	return lines * 0.1;
}

void estimate(int lines, double (*pf)(int))
{
	cout << lines << " lines code will take " << (*pf)(lines) << endl;
}
