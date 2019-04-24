#include <iostream>
#include <string>
using namespace std;

class Complex {
	double re, im;
public:
	Complex(double re, double im)
	{
		this->re = re;
		this->im = im;
	}
	void Print()
	{
		cout << re << "+" << im << "i" << endl;
	}

	double module()
	{
		return sqrt(this->re*this->re + this->im * this->im);
	}

	double getRe()
	{
		return this->re;
	}

	double getIm()
	{
		return this->im;
	}
};
int main() {
	Complex comp(14.88, 13.37);
	cout << comp.module() << endl;
	system("pause");
	return 0;
}