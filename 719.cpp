#include <iostream>

using namespace std;

const double * f1(const double *ar, int n);
const double * f2(const double ar[], int n);
const double * f3(const double ar[], int n);

int main(){
	double av[3] = {1112.3, 1542.6, 2227.9};
	// task1:
	// p1(p2): pointer to a func
	const double *(*p1)(const double *, int) = f1;
	auto p2 = f2;
	cout << "---------------Part1---------------" << endl;
	cout << "Address \t value" << endl;
	cout << (*p1)(av, 3) << "\t" << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << "\t" << *p2(av, 3) << endl;

	// part2
	// pa(pb) is an array of pointers
	const double *(*pa[3])(const double *, int) = {f1, f2, f3};
	auto pb = pa;
	cout << "---------------Part2---------------" << endl;
	cout << "Address \t value" << endl;
	for (int i = 0; i < 3; i++) {
		cout << pa[i](av, 3) << "\t" <<  *pa[i](av, 3) << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << pb[i](av, 3) << "\t" << *pb[i](av, 3) << endl;
	}

	// part3
	// pc(pd) is a pointer to an array of (funciton pointers)
	auto pc = &pa;
	const double *(*(*pd)[3])(const double *, int) = &pa;
	cout << "---------------Part3---------------" << endl;
	cout << "Address \t value" << endl;
	cout << (*pc)[0](av, 3) << "\t" << *(*pc)[0](av, 3) << endl;
	cout << (*pd)[1](av, 3) << "\t" << *(*pd)[1](av, 3) << endl;
	cout << (*(*pd)[2])(av, 3) << "\t" << *(*(*pd)[2])(av, 3) << endl;
	return 0;
}

const double * f1(const double *ar, int n)
{
	return ar;
}

const double * f2(const double ar[], int n)
{
	return ar + 1;
}

const double * f3(const double ar[], int n)
{
	return ar + 2;
}
