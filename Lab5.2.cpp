#include <iostream>
#include <string>
using namespace std;

class Vector {
	double x, y, z;
public:
	Vector(double x, double y, double z)
	{
		cout << "Made " << this << endl;
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vector()
	{
		cout << "Made " << this << endl;
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}
	Vector(const Vector &other)
	{
		cout << "Copy " << this << endl;
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
	}
	~Vector() {
		cout << "destruction " << this << endl;
	}
	void Print()
	{
		cout << x << "," << y << "," << z << endl;
	}

	double module()
	{
		return sqrt(x*x + y * y + z * z);
	}

	friend Vector sum(Vector a, Vector b)
	{
		Vector c;
		c.x = a.x + b.x;
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
	void operator =(const Vector &other) {
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
	}
	bool operator == (const Vector &other) {
		return ((this->x == other.x) && (this->y == other.y) && (this->y == other.y));
	}
	bool operator > (const Vector &other) {
		return ((this->x*this->x + this->y*this->y+this->z*this->z) > (other.x*other.x + other.y*other.y+ other.z*other.z));
	}
	bool operator < (const Vector &other) {
		return ((this->x*this->x + this->y*this->y + this->z*this->z) < (other.x*other.x + other.y*other.y + other.z*other.z));
	}
	bool operator != (const Vector &other) {
		return ((this->x != other.x) && (this->y != other.y) && (this->z != other.z));
	}
	friend istream& operator>>(istream &in, Vector &other);
	friend ostream& operator<<(ostream &out, Vector &other);
};

istream& operator>>(istream &in, Vector &other) {
	in >> other.x;
	in >> other.y;
	in >> other.z;
	return in;
}
ostream& operator<<(ostream &out, Vector &other) {
	out << other.x << " " << other.y << " " << other.z << endl;
	return out;
}
int main() {
	setlocale(0, "rus");
	Vector a(1, 4, 8);
	Vector b(1, 3, 7);
	Vector c;
	Vector d;
	c = sum(a, b);
	d = dif(a, b);
	cout << "Modul' :" << a.module() << "   " << b.module() << endl;
	cout << "Sum :";
	c.Print();
	cout << "Dif :";
	d.Print();
	Vector m(a);
	system("pause");
	return 0;
}