#include <iostream>
#include <string>
using namespace std;

class Complex {
	double re, im;
public:
	Complex(double re, double im)
	{
		cout << "Made " << this << endl;
		this->re = re;
		this->im = im;
	}
	Complex(const Complex &other) {
		cout << "Copy " << this << endl;
		this->re = other.re;
		this->im = other.im;
	}
	~Complex() {
		cout << "destruction " << this << endl;
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
	Complex comp2(comp);
	system("pause");
	return 0;
}