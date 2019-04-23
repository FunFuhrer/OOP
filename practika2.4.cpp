#include <iostream>
using namespace std;
int main()
{
	double a;
	double x;
	double y;
	double t;
	cout << "a=";
	cin >> a;
	cout << "x=";
	cin >> x;

	if (a > x)
		y = pow(sin(a*x), 1. / 2.);
	else
		y = a + log(x + a);
	if (y > a)
		t = tan(a*x) + cos(2 * a*y);
	else if (y == a)
		t = y / (a - x) + (a + x) / (y*y);
	else
		t = y / (a - x);
	cout << "a=" << a << endl;
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	cout << "t=" << t << endl;
	system("pause");
	return 0;
}