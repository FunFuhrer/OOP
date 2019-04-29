#include <iostream>
#include <cmath>
using namespace std;

class Function {
public:
	virtual void PrintVyrazhenie() = 0;
	virtual double Vychislenie(double x) = 0;
	virtual void BackProizvodnuyu() = 0;
	virtual Function* Copy() = 0;
};
class Const : public Function {
	float a;
public:
	Const(float a) {
		this->a = a;
	};
	void PrintVyrazhenie() override {
		cout << "f(x)=" << a << endl;
	}
	double Vychislenie(double x) override {
		return a;
	}
	void BackProizvodnuyu()override {
		cout << "f'(x)=0" << endl;
	}
	Function* Copy()override {
		Const c = *this;
		return &c;
	}
};

class Peremennaya : public Function {
	float k,b;
public:
	Peremennaya(float k, float b) {
		this->k = k;
		this->b = b;
	};
	void PrintVyrazhenie() override {
		if (b!=0)
		cout << "f(x)=" << k <<"x"<<b<< endl;
		else
		cout << "f(x)=" << k << "x" << endl;
	}
	double Vychislenie(double x) override {
		return k*x+b;
	}
	void BackProizvodnuyu()override {
		cout << "f'(x)=" <<k<< endl;
	}
	Function* Copy()override {
		Peremennaya c = *this;
		return &c;
	}
};

class Summa : public Function {
	float u, v;
public:
	Summa(float u, float v) {
		this->u = u;
		this->v = v;
	};
	void PrintVyrazhenie() override {
		cout << "f(x)=" << u << "+" << v << endl;
	}
	double Vychislenie(double x) override {
		return u+v;
	}
	void BackProizvodnuyu()override {
		cout << "f'(x)=0" << endl;
	}
	Function* Copy()override {
		Summa c = *this;
		return &c;
	}
};

class Raznost : public Function {
	float u, v;
public:
	Raznost(float u, float v) {
		this->u = u;
		this->v = v;
	};
	void PrintVyrazhenie() override {
		cout << "f(x)=" << u << "-" << v << endl;
	}
	double Vychislenie(double x) override {
		return u - v;
	}
	void BackProizvodnuyu()override {
		cout << "f'(x)=0" << endl;
	}
	Function* Copy()override {
		Raznost c = *this;
		return &c;
	}
};

class Proizvedenie : public Function {
	float u, v;
public:
	Proizvedenie(float u, float v) {
		this->u = u;
		this->v = v;
	};
	void PrintVyrazhenie() override {
		cout << "f(x)=" << u << "*" << v << endl;
	}
	double Vychislenie(double x) override {
		return u * v;
	}
	void BackProizvodnuyu()override {
		cout << "f'(x)=0" << endl;
	}
	Function* Copy()override {
		Proizvedenie c = *this;
		return &c;
	}
};

class Chastnoe : public Function {
	float u, v;
public:
	Chastnoe(float u, float v) {
		this->u = u;
		this->v = v;
	};
	void PrintVyrazhenie() override {
		cout << "f(x)=" << u << "/" << v << endl;
	}
	double Vychislenie(double x) override {
		if (v != 0)
			return u / v;
		else
			return INFINITY;
	}
	void BackProizvodnuyu()override {
		cout << "f'(x)=0" << endl;
	}
	Function* Copy()override {
		Chastnoe c = *this;
		return &c;
	}
};

class Sin : public Function {
	float x;
public:
	Sin(float x) {
		this->x = x;
	};
	void PrintVyrazhenie() override {
		cout << "f(x)=sin(x)" << endl;
	}
	double Vychislenie(double x) override {
		return sin(x);
	}
	void BackProizvodnuyu()override {
		cout << "f'(x)=cos(x)" << endl;
	}
	Function* Copy()override {
		Sin c = *this;
		return &c;
	}
};

class Cos : public Function {
	float x;
public:
	Cos(float x) {
		this->x = x;
	};
	void PrintVyrazhenie() override {
		cout << "f(x)=cos(x)" << endl;
	}
	double Vychislenie(double x) override {
		return cos(x);
	}
	void BackProizvodnuyu()override {
		cout << "f'(x)=-sin(x)" << endl;
	}
	Function* Copy()override {
		Cos c = *this;
		return &c;
	}
};

class Exp : public Function {
	float x;
public:
	Exp(float x) {
		this->x = x;
	};
	void PrintVyrazhenie()override {
		cout << "f(x)=e^x" << endl;
	}
	double Vychislenie(double x)override {
		return exp(x);
	}
	void BackProizvodnuyu()override {
		cout << "f'(x)=e^x" << endl;
	}
	Function* Copy()override {
		Exp c = *this;
		return &c;
	}
};

class Ln : public Function {
	float x;
public:
	Ln(float x) {
		this->x = x;
	};
	void PrintVyrazhenie()override {
		cout << "f(x)=ln(x)" << endl;
	}
	double Vychislenie(double x)override {
		return log(x);
	}
	void BackProizvodnuyu()override {
		cout << "f'(x)=1/x" << endl;
	}
	Function* Copy()override {
		Ln c = *this;
		return &c;
	}
};

int main() {
	double y, x,k,b;

	cout << "Const" << endl << "Enter x: ";
	cin >> x;
	Const a(x);
	a.PrintVyrazhenie();
	cout << "f(" << x << ") = " << a.Vychislenie(x) << endl;
	a.BackProizvodnuyu();

	cout << endl << "Peremennaya" << endl << "k : ";
	cin >> k;
	cout << endl << "b : ";
	cin >> b;
	Peremennaya d(k, b);
	cout << "Enter argument: ";
	cin >> x;
	d.PrintVyrazhenie();
	cout << "f(" << x << ") = " << d.Vychislenie(x) << endl;
	d.BackProizvodnuyu();

	cout << endl << "Sum" << endl << "Enter u and v: ";
	cin >> y >> x;
	Summa c(x,y);
	c.PrintVyrazhenie();
	cout << "f(" << x << ") = " << c.Vychislenie(x) << endl;
	c.BackProizvodnuyu();

	cout << endl << "Raznost" << endl << "Enter u and v: ";
	cin >> x >> y;
	Raznost e(x,y);
	e.PrintVyrazhenie();
	cout << "f(" << x << ") = " << e.Vychislenie(x) << endl;
	e.BackProizvodnuyu();

	cout << endl << "Proizvedenie" << endl << "Enter u and v: ";
	cin >> x >> y;
	Proizvedenie f(x, y);
	f.PrintVyrazhenie();
	cout << "f(" << x << ") = " << f.Vychislenie(x) << endl;
	f.BackProizvodnuyu();

	cout << endl << "Chastnoe" << endl << "Enter u and v: ";
	cin >> x >> y;
	Chastnoe g(x, y);
	g.PrintVyrazhenie();
	cout << "f(" << x << ") = " << g.Vychislenie(x) << endl;
	g.BackProizvodnuyu();

	cout << endl << "Sin" << endl << "Enter x : ";
	cin >> x ;
	Sin h(x);
	h.PrintVyrazhenie();
	cout << "f(" << x << ") = " << h.Vychislenie(x) << endl;
	h.BackProizvodnuyu();

	cout << endl << "Cos" << endl << "Enter x : ";
	cin >> x ;
	Cos z(x);
	z.PrintVyrazhenie();
	cout << "f(" << x << ") = " << z.Vychislenie(x) << endl;
	z.BackProizvodnuyu();

	cout << endl << "Exp" << endl << "Enter x : ";
	cin >> x ;
	Exp l(x);
	l.PrintVyrazhenie();
	cout << "f(" << x << ") = " << l.Vychislenie(x) << endl;
	l.BackProizvodnuyu();

	cout << endl << "Ln" << endl << "Enter x : ";
	cin >> x ;
	Ln m(x);
	m.PrintVyrazhenie();
	cout << "f(" << x << ") = " << m.Vychislenie(x) << endl;
	m.BackProizvodnuyu();


	system("pause");
	return 0;
}