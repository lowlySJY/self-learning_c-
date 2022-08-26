#include <iostream>

using namespace std;


struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void set_box(box *);
void show(box);

int main() {
	box b = {"cube", 3, 4, 5};

	set_box(&b);
	show(b);

	return 0;
}

void set_box(box * pb)
{
	pb->volume = pb->height * pb->width * pb->length;
}

void show(box b)
{
	cout << "maker: " << b.maker << endl;
	cout << "length: " << b.length << endl;
	cout << "width: " << b.width << endl;
	cout << "volume: " << b.volume << endl;
}
