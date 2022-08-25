#include <iostream>

int main() {
	using namespace std;
	char ch;
	int count = 0;

	cout << "Enter characters until #" << endl;

	cin.get(ch);

	while(ch != '#') {
		cout << ch;
		++count;
		cin >> ch;
	}

	cout << endl << count << " chars read" << endl;

	return 0;
}
