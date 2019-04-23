#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	double y;
	double t;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	if (a > b)
		y = a+2*log(b);
	else
		y = ((a-b)/(a+b))*((a+b)/(a*a-a*b+b*b));

	if (y < b)
		t = sin(y)*sin(y) + 1 / (tan(a - b));
	else if (y == b)
		t = (2 * y + pow(y*y - a, 1. / 2.)) / (2 * b - pow(a*a - y, 1. / 2.));
	else
		t = pow(y*sin(a), 1. / 3.) + 1 / (pow(y*cos(b), 1. / 2.));
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "y=" << y << endl;
	cout << "t=" << t << endl;
	system("pause");
	return 0;
}