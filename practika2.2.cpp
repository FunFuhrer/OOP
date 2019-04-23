#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	double z;
	double t;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	if (a >= b)
		z = 1 - 2 * cos(a)*sin(b);
	else
		z = pow(abs(pow(a,2)-pow(b,2)), 1. / 2.);

	if (z < b)
		t = pow((z + pow(a, 2)*b), 1. / 3.);
	else if (z == b)
		t = 1 - log10(z) + cos(pow(a, 2)*b);
	else
		t = 1 / (cos(z*a));
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "z=" << z << endl;
	cout << "t=" << t << endl;
	system("pause");
	return 0;
}