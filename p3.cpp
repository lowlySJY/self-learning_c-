#include <iostream>
#include <cstring>

int main() {
	using namespace std;
	char first_name [20], last_name[20];

	char full_name[40];

	cout << "enter fisrt name: " << endl;
	cin.getline(first_name, 20);
	cout << "entet last name: " << endl;
	cin.getline(last_name, 20);

	strcpy(full_name, last_name);
	strcat(full_name, ", ");
	strcat(full_name, first_name);
	cout << "here is the information in a single string: ";
	cout << full_name << endl;

	return 0;
}
