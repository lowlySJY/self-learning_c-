#include <iostream>
#include <climits>

int main(void)
{
	using namespace std;
	int n_int = INT_MAX;
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "Maximum values: " << n_int << endl;
	return 0;
}
