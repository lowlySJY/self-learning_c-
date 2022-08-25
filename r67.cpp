#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	string words;
	int vowels = 0, cons = 0, others = 0;

	cout << "Ente words" << endl;

	while(cin >> words && words != "q") {
		if (isalpha(words[0]))  {
			switch(words[0]){
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u': vowels++; break;
				default : cons++;
			}
		} else
			others++;
	}
	cout << "Vowels: " << vowels << "\tcons:" << cons << "\tothers = " << others << endl;
	return 0;
}

