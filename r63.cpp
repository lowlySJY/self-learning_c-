#include <iostream>

void showmenu();

using namespace std;

int main() {

	showmenu();

	char ch;
	cin.get(ch);

	while(ch != 'c' && ch != 'p' && ch != 't' && ch != 'g') {
		cin.get();
		cout << "Please enter a character: c, p, t, g:";
		cin.get(ch); 
	}

	switch(ch) {
		case 'c' : break;
		case 'p' : break;
		case 't' : cout << "maple is a tree" << endl;
	}

	return 0;
}

void showmenu() {
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore\t\t p)pianist" << endl;
	cout << "t) tree\t\t\t g)game" << endl;
}
