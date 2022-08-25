#include <iostream>


void showmenu();
void print_fullname();
void print_title();
void print_bopname();
void print_pref();

using namespace std;

const int strsize  = 30;
const int usersize = 40;

struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

bop user[usersize] = 
{
	{"Rick", "level_A", "RR", 0},
	{"Jack", "level_B", "JJ", 1},
	{"SDSD", "level_C", "DD", 2},
	{"SDere", "level_D", "EE", 1}
};

int main() {
	showmenu();

	char ch;

	cin.get(ch);

	while(ch != 'q') {
		switch (ch) {
			case 'a' : print_fullname(); break;
			case 'b' : print_title(); break;
			case 'c' : print_bopname(); break;
			case 'd' : print_pref(); break;
			default : cout << "Please enter: a, b, c, d, q." << endl;
		}
		cin.get();
		cout << "Next input:";
		cin.get(ch);
	}
	cout << "Bye" << endl;
	return 0;
}

void showmenu() {
	cout << "Benevolent Order of Programmer Report" << endl;
	cout << "a. display by name \t\t b. display by title" << endl;
	cout << "c. display by bopname \t\t d.display by preference" << endl;

}


void print_fullname() {}

void print_title() {}

void print_bopname() {}

void print_pref() {}
