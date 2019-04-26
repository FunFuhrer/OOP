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
	void operator = (const Complex &other) {
		this->re = other.re;
		this->im = other.im;
	}
	void operator++() {
		this->re++;
	}
	void operator--() {
		this->re++;
	}
	bool operator == (const Complex &other) {
		return ((this->re == other.re) && (this->im == other.im));
	}
	bool operator > (const Complex &other) {
		return ((this->re*this->re + this->im*this->im) >(other.re*other.re + other.im*other.im) );
	}
	bool operator < (const Complex &other) {
		return ((this->re*this->re + this->im*this->im) < (other.re*other.re + other.im*other.im));
	}
	bool operator != (const Complex &other) {
		return ((this->re != other.re) && (this->im != other.im));
	}

	friend istream& operator>>(istream &in, Complex &other);
	friend ostream& operator<<(ostream &out, Complex &other);
};

istream& operator>>(istream &in, Complex &other) {
	in >> other.re;
	in >> other.im;
	return in;
}
ostream& operator<<(ostream &out, Complex &other) {
	out << other.re << "+" << other.im <<"i"<< endl;
	return out;
}


int main() {
	Complex comp(14.88, 13.37);
	cout << comp.module() << endl;
	Complex comp2(comp);
	cout <<endl<< comp << endl;
	system("pause");
	return 0;
}