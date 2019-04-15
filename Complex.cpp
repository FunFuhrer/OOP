#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
	re = 0;
	im = 0;
}

Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

Complex operator+ (Complex a, Complex b)
{
	Complex c;
	c.re =a.re+b.re;
	c.im =a.im+b.im;
	return c;
}

Complex operator- (Complex a, Complex b)
{
	Complex c;
	c.re = a.re - b.re;
	c.im = a.im - b.im;
	return c;
}

Complex operator* (Complex a, Complex b)
{
	Complex c;
	c.re = a.re*b.re - a.im*b.im;
	c.im = a.im*b.re + a.re*b.im;
	return c;
}

Complex operator/ (Complex a, Complex b)
{
	Complex c;
	c.re = (a.re*b.re + a.im*b.im) / (b.re*b.re + b.im*b.im);
	c.im = (a.im*b.re - a.re*b.im) / (b.re*b.re + b.im*b.im);
	return c;
}

void Complex::Print()
{
	cout << re << "+" << im << "i" << endl;
}

double Complex::module()
{
	return sqrt(this->re*this->re + this->im * this->im);
}

double Complex::getRe()
{
	return this->re;
}

double Complex::getIm()
{
	return this->im;
}

Complex Complex::pow(int p) {
	Complex res;
	res = *this;
	while (p > 1) {
		res = res * *this;
		p--;
	}
	return  res;
}