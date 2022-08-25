#include <iostream>
#include <string>

int main() {
	using namespace std;
	string first_name, last_name;

	string full_name;

	cout << "enter fisrt name: " << endl;
	getline(cin, first_name);
	cout << "entet last name: " << endl;
	getline(cin, last_name);

	full_name = last_name + ", " + first_name;
	cout << "here is the information in a single string: ";
	cout << full_name << endl;

	return 0;
}
