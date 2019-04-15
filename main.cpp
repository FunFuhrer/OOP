#include "Complex.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	setlocale(0, "rus");
	cout << "1 - 1,1   2 - 1,2"<<endl;
	int k;
	cin>> k;
	switch (k)
	{
	case 1:
		{
		double re1, re2, im1, im2;
		cout << "¬ведите первое число(сначала действительную затем мнимую часть через пробел)" << endl;
		cin >> re1 >> im1;
		cout << "¬ведите второе число(сначала действительную затем мнимую часть через пробел)" << endl;
		cin >> re2 >> im2;
		Complex a(re1, im1), b(re2, im2), c;
		c = a + b;
		cout << "—ложение указанных чисел = ";
		c.Print();
		cout << endl;

		c = a - b;
		cout << "¬ычитание указанных чисел = ";
		c.Print();
		cout << endl;

		c = a * b;
		cout << "”множение указанных чисел = ";
		c.Print();
		cout << endl;

		c = a / b;
		cout << "ƒеление указанных чисел = ";
		c.Print();
		cout << endl;
		}
	case 2:
	{
		ifstream file("complex.txt");
		int n;
		double r, m;
		vector<Complex> p;
		file >> n;
		for (int i = 0; i < n; i++) {
			file >> r >> m;
			Complex el(r, m);
			p.push_back(el);
		}
		file.close();
		Complex max;
		double md = p[0].module();
		for (int i = 0; i < n; i++)
			if (p[i].module() > md) {
				md = p[i].module();
				max = p[i];
			}
		cout << max.getRe() << "+" << max.getIm() << "i" << endl;
	}
	default:
		break;
	}
	system("pause");
	return 0;
}