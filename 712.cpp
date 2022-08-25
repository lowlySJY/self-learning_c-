#include <iostream>
#include <cmath>

using namespace std;

struct polar{
	double dist;
	double angle;
};

struct rect {
	double x;
	double y;
};

polar rect_to_polar(rect r);
void show_polar(polar p);

int main() {
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";
	while(cin>>rplace.x >> rplace.y) {
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two number" << endl;
	}
	return 0;
}

polar rect_to_polar(rect r)
{
	polar ans;
	ans.dist = sqrt(r.x * r.x + r.y * r.y);
	ans.angle = atan2(r.y, r.x);
	return ans;
}

void show_polar(polar p)
{
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << p.dist;
	cout << ", angle = " << p.angle * Rad_to_deg;
	cout << " degress" << endl;
}
