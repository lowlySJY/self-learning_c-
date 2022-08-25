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

void rect_to_polar(const rect *r, polar *p);
void show_polar(const polar *p);

int main() {
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";
	while(cin>>rplace.x >> rplace.y) {
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Next two number" << endl;
	}
	return 0;
}

void rect_to_polar(const rect *r, polar *p)
{
	p->dist = sqrt(r->x * r->x + r->y * r->y);
	p->angle = atan2(r->y, r->x);
}

void show_polar(const polar *p)
{
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << p->dist;
	cout << ", angle = " << p->angle * Rad_to_deg;
	cout << " degress" << endl;
}
