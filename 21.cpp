#include <iostream>

int main() {
	using namespace std;

	char animal[20] =  "bear";
	const char *bird = "wren";
	char *ps;

	cout << "animal: " << animal << " and " << bird << endl;
	cout << "enter a kind of animal " << endl;
	cin >> animal;
	cout << animal;

	return 0;
}
