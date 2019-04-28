#include <iostream>
#include <string>
#include<list>
using namespace std;

class Complex {
	double re, im;
public:
	Complex(double re, double im)
	{
		this->re = re;
		this->im = im;
	}
	Complex(const Complex &other) {
		this->re = other.re;
		this->im = other.im;
	}
	~Complex() {
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
		return ((this->re*this->re + this->im*this->im) > (other.re*other.re + other.im*other.im));
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
	out << other.re << "+" << other.im << "i" << endl;
	return out;
}

/*void PrintList(const list<Complex> &lst) {
	for (auto i=lst.cbegin() ; i!=lst.cend()  ; ++i)
	{
		cout << *i <<endl;
	}

}*/

int main() {
	Complex comp1(14.88, 13.37);
	Complex comp2(14,4 );
	Complex comp3(27,17.5 );
	list<Complex> complex;
	complex.push_back(comp1);
	complex.push_back(comp2);
	complex.push_front(comp3);

	cout << complex.back().getRe() << "+" << complex.back().getIm() <<"i"<< endl;
	complex.pop_back();

	cout << complex.back().getRe() << "+" << complex.back().getIm() << "i" << endl;
	complex.pop_back();

	cout << complex.back().getRe() << "+" << complex.back().getIm() << "i" << endl;

	system("pause");
	return 0;
}