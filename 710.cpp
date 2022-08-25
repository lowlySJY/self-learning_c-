#include <iostream>

char * buildstr(char c, int n);

using namespace std;

int main() {
	char ch;
	int times;
	cout << "Enter a charater: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> times;


	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete []ps;

	return 0;
}

char * buildstr(char c, int n){
	char *pstr = new char[n+1];

	pstr[n] = '\n';
	for(int i = 0; i < n; i++){
		pstr[i] = c;
	}
	return pstr;
}
