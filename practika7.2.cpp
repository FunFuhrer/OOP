#include <iostream>
#include <string>
using namespace std;

class Figure{
public:
	virtual void Square() = 0;
};
class Quadrilateral : public Figure {
public:
	virtual void Square() = 0;
};
class Rhombus : public Quadrilateral {
	double d1, d2;
public:
	Rhombus(double d1, double d2) {
		this->d1 = d1;
		this->d2 = d2;
	}
	void Square() override {
		cout<< d1*d2 / 2<<endl;
	}
};
class Rectangle : public Quadrilateral {
	double a, b;
public:
	Rectangle(double a, double b) {
		this->a = a;
		this->b = b;
	}
	void Square() override {
		cout<< a * b<<endl;
	}
};
int main() {
	Rectangle a(13, 37);
	Rhombus b(13, 37);
	Figure *square1 = &a;
	square1->Square();
	Figure *square2 = &b;
	square2->Square();
	system("pause");
	return 0;
}