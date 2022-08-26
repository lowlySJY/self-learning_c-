#include <iostream>

using namespace std;
const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);

int main() {
	student pa[SLEN];
	getinfo(pa, SLEN);
	display1(pa);
	return 0;
}

int getinfo(student pa[], int n)
{
	for(int i = 0; i < n; i++) {
		cout << "Enter the name of a student: ";
		cin >> pa[i].fullname;
		cout << "Enterh the hobby: ";
		cin >> pa[i].hobby;
		cout << "Enter the level: ";
		cin >> pa[i].ooplevel;

		if(!cin) {
			cin.clear();
			while(cin.get() != '\n');
			cout << "Invalid input!" << endl;
			break;
		}
	}
	return i;
}

void display1(student st)
{
	cout << "Name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "Level: " << st.ooplevel << endl;
}


