#include <iostream>

int main() {
	using namespace std;
	const int size = 20;
	char first_name[size];
	char last_name[size];
	char grade;
	int age;

	cout << "enter your first name: " ;
	cin.getline(first_name, size);
	cout << "enter your last name: ";
	cin.getline(last_name, size);
	cout << "what letter grade: ";
	cin >> grade;
	cout << "what is your age: ";
	cin >> age;

	cout << "Name "<< last_name << ", " << first_name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age " << age << endl;
	return 0;
}
