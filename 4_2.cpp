#include <iostream>
#include <cstring>
int main(void){
	using namespace std;

	const int SIZE = 15;
	char name1[SIZE];
	char name2[SIZE] = "C++owboy";

	cout << name2 << endl;
	cout << "what your name" << endl;
	cin >> name1;
	cout << "Well, " << name1 << " , your name has " << strlen(name1) << " chars" << endl; 
	cout << " Your name stored in an array of " << sizeof(name1) << " bytes" << endl;
	return 0;
}
