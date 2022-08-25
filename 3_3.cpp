#include <iostream>

const int DEGREE_TO_MINUTE = 60;
const int DEGREE_TO_SECOND = 3600;

int main() {
	using namespace std;
	int degrees, minutes, seconds;

	cout << "Enter a latitude in degrees, mins, seconds:" << endl;
	cout << "First, enter the degree:";
	cin >> degrees;
	cout << "Next, enter the minutes of arc:";
	cin >> minutes;
	cout << "Finally, enter the secondes of arc:";
	cin >> seconds;

	double degree_style;
	degree_style = degrees + double(minutes)/DEGREE_TO_MINUTE + double(seconds)/DEGREE_TO_SECOND;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds =  " << degree_style << " degrees." << endl; 

	return 0;
}
