#include <iostream>

using namespace std;
unsigned int c_in_str(const char*, char);

int main() {
	char mm[15] = "minimum";
	const char *wail = "ululate";
	unsigned int ms = c_in_str(mm, 'm');
	unsigned int us = c_in_str(wail, 'u');

	cout << ms << "m characters in " << mm << endl;
	cout << us << "u characters in " << wail << endl;
	return 0;
}


unsigned int c_in_str(const char *str, char ch) {
	unsigned int count = 0;
	while(*str){
		if (*str == ch) count++;
		str++;
	}
}
