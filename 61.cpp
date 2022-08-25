#include <iostream>
#include <cctype>

int mian() {
	using namespace std;
	int whitespace = 0;
	int digit = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	char ch;

	cout << "enter text" << endl;

	cin.get(ch);

	while (ch != '@') {
		if(isalpha(ch)) chars++;
		else if (isspace(ch)) whitespace++;
		else if (isdigit(ch)) digit++;
		else if (ispunct(ch)) punct++;
		else others++;
		cin.get(ch);
	}

	

	return 0;
}
