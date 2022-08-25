#include <iostream>

const int DAY_HOUR = 24;
const int HOUR_TO_MIN = 60;
const int MIN_TO_SECOND = 60;

int main() {
	using namespace std;
	long long world_population, usa_amount;

	cout << "Enter the world's poplulation:";
	cin >> world_population;
	cout << "Enter the population of us:";
	cin >> usa_amount;

	double rate;
	rate = double(usa_amount) / double(world_population);
	cout << rate;
	return 0;
}
