2.
a.void igor();
b.float tofu(int);
c.double mpg(double, double);
d.long summation(long [], int);
e.double doctor(const char *str);
f.void ofcourse(boss);
g.char * plot(map *pt);

3.
void set_array(int arr[], int size, int value)
{
	for (int i= 0; i < size; i++) {
		arr[i] = value;
	}
}

4.
void set_array(int * begin, int *end, int value)
{
	for (int *pt = begin; pt != end; pt++) {
		*pt = value;
	}
}

5.
double max_number(const double arr[], int size)
{
	double max = arr[0];
	for(int i = 1; i < size; i++){
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

6.
形参与实参的差别

7.
char str[] = "Hello world";
"Hello world";
char *pt = "Hello world";

8.
int replace(char * str, char c1, char c2)
{
	int count = 0;
	while(*str) {
		if (*str == c1) {
			*str = c2;
			count++;
		}
		str++;
	}
	return count;
}

9.
*"pizza" -> p
"taco"[2] -> c
把双引号看作数组

10.
按值需要复制实参，可以保护原始数据，但是更多的内存占用和操作量

11.
int judge(int (*pf)(const char *))

12.
a.
void show(applicant ap)
{
	cout << ap.name << endl;
	for (int i = 0; i < 3; i++)
		cout << ap.credit_ratings[i] << endl;
}

b.
void show(const applicant *ap)
{
	cout << ap->name << endl;
	for (int i = 0; i < 3; i++)
		cout << ap->credit_ratings[i] << endl;
}

13.
typedef void (*p_f1)(applicant *a);
p_f1 p1 = f1;

typedef char *(*p_f2)(const applicant *a1, const applicant *a2);
p_f2 p2 = f2;

p_f1 ap[5];
p_f2 (*pa)[10];
