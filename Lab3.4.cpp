#include <iostream>
#include <string>
using namespace std;

class Vector {
	double x,y,z;
public:
	Vector (double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vector()
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}
	void Print()
	{
		cout << x << "," << y << "," << z << endl;
	}

	double module()
	{
		return sqrt(x*x+y*y+z*z);
	}

	friend Vector sum(Vector a, Vector b)
	{
		Vector c;
		c.x=a.x+b.x;
		c.y = a.y + b.y;
		c.z = a.z + b.z;
		return c;
	}
	friend Vector dif(Vector a, Vector b)
	{
		Vector c;
		c.x = a.x - b.x;
		c.y = a.y - b.y;
		c.z = a.z - b.z;
		return c;
	}
};
int main() {
	setlocale(0, "rus");
	Vector a(1, 4, 8);
	Vector b(1, 3, 7);
	Vector c;
	Vector d;
	c = sum(a, b);
	d = dif(a, b);
	cout << "Модули :" << a.module() << "   " << b.module() << endl;
	cout << "Сумма :";
	c.Print();
	cout << "Разность :";
	d.Print();
	system("pause");
	return 0;
}