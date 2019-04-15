#pragma once 
class Complex
{
private:
	double re;
	double im;
public:
	Complex();
	Complex(double re, double im);
	friend Complex operator+(Complex a, Complex b);
	friend Complex operator-(Complex a, Complex b);
	friend Complex operator*(Complex a, Complex b);
	friend Complex operator/(Complex a, Complex b);
	void Print();
	double module();
	double getRe();
	double getIm();
	Complex pow(int p);
};