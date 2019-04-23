#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	double n;
	double m;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	
	if (a >= b)
	n=pow(a-b, 1. / 3.);
	else
	n = pow(a, 2) + (a - b) / sin(a*b);

	if (n < b)
		m = (n + a) / (-b) + pow(pow(sin(a), 2) - cos(n), 1. / 2.);
	else if (n == b)
		m = pow(b, 2) + tan(n*a);
	else
		m = pow(b, 3) + n * pow(a, 2);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "n=" << n << endl;
	cout << "m=" << m << endl;
	system("pause");
	return 0;
}