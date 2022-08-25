#include <iostream>
#include <cstring>

using namespace std;

const char DONE[] = "done";

int main() {
	char word[20];
	int counter = -1;
	cout << "enter words:" << endl;

	do {
		cin >> word;
		cin.get();
		counter++;
	} while (strcmp(word, DONE) != 0);

	cout << "you enter total word: " << counter << endl;
	return 0;
}
