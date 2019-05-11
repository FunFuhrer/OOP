#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "windows.h"
#include "conio.h"
using namespace std;
COLORREF white = RGB(255, 255, 255);
COLORREF green = RGB(0, 255, 0);
HWND console = GetConsoleWindow();
HDC hdc = GetDC(console);

void Draw()
{//графическая ось
	for (int i = 50; i <= 850; i++)
	{
		SetPixel(hdc, i, 450, white);
	}
	for (int i = 50; i <= 850; i++)
	{
		SetPixel(hdc, 450, i, white);
	}
	for (int i = 50; i <= 850; i = i + 40)
	{
		for (int j = 440; j <= 460; j++)
		{
			SetPixel(hdc, i, j, white);
		}
	}
	for (int i = 50; i <= 850; i = i + 40)
	{
		for (int j = 440; j <= 460; j++)
		{
			SetPixel(hdc, j, i, white);
		}
	}

}

class Function
{
protected:
	int x=450, y=450;
public:
	void Down() {
		this->y = this->y - 40;
	}
	void Up() {
		this->y = this->y + 40;
	}
	void Left() {
		this->x = this->x + 40;
	}
	void Right() {
		this->x = this->x - 40;
	}
	virtual void Print() = 0;
	virtual void Promeg() = 0;
};

class Const :public Function {
	float C;
public:
	Const() {
		this->C = 0;
	}
	Const(float C) {
		this->C = C;
	}
	void Set(float C) {
		this->C = C;
	}
	void Print()override
	{
		for (int i = 50; i <= 850; i++)
		{
			SetPixel(hdc, i, -(C * 40) + y, green);
		}
	};
	void Promeg()override
	{
		std::cout << "x[" << -10-(x-450)/40 << ";" << 10 - (x - 450) / 40 << "] , y[" << -10 + (y - 450) / 40 << ";" << 10 + (y - 450) / 40 << "]" << endl;
	};
};

class Pryamaya :public Function {
	float k, b;
public:
	Pryamaya() {
		this->k = 0;
		this->b = 0;
	}
	Pryamaya(float k, float b)
	{
		this->k = k;
		this->b = b;
	}
	void Set(float k, float b)
	{
		this->k = k;
		this->b = b;
	}
	void Print()override {
		if (abs(k)<=1)
		{
			for (float i = 50; i <= 850; i++)
			{
				int j = y - int(k*(i - x) + b * 40);
				SetPixel(hdc, i, j, green);
			}
		}
		else {
			for (float j = 50; j <= 850; j++)
			{
				int i = int((y-40*b-j+k*x)/k);
				SetPixel(hdc, i, j, green);
			}
		}
		
		}
	void Promeg()override
	{
		std::cout << "x[" << -10 - (x - 450) / 40 << ";" << 10 - (x - 450) / 40 << "] , y[" << -10 + (y - 450) / 40 << ";" << 10 + (y - 450) / 40 << "]" << endl;
	};
	};

class Sin :public Function {

public:
	void Print()override {
		for (float i = 50; i <= 850; i++)
		{
			float min = 1;
			int q = 0;
			for (float j = 50; j <= 850; j++)
			{
				if (abs(-(j - y) - 40 * sin(-(x - i) / 40)) < min) {
					min = abs(-(j - y) - 40 * sin(-(x - i) / 40));
					q = j;
				}
			}
			SetPixel(hdc, i, q, green);
		}
	};
	void Promeg()override {
		std::cout << "x[" << -10 - (x - 450) / 40 << ";" << 10 - (x - 450) / 40 << "] , y[" << -10 + (y - 450) / 40 << ";" << 10 + (y - 450) / 40 << "]" << endl;
	};
};

class Cos : public Function {
public:
	void Print()override{
	for (float i = 50; i <= 850; i++)
	{
		float min = 1;
		int q = 0;
		for (float j = 50; j <= 850; j++)
		{
			if (abs(-(j - y) - 40 * cos(-(x - i) / 40)) < min) {
				min = abs(-(j - y) - 40 * cos(-(x - i) / 40));
				q = j;
			}
		}
		SetPixel(hdc, i, q, green);
	}
};
	void Promeg()override{
		std::cout << "x[" << -10 - (x - 450) / 40 << ";" << 10 - (x - 450) / 40 << "] , y[" << -10 + (y - 450) / 40 << ";" << 10 + (y - 450) / 40 << "]" << endl;
	};
};

class Tg : public Function {
public:
	void Print()override{
	for (float z = 50; z < 954; z = z + M_PI * 40)
	{
		for (double j = 50; j <= 850; j++)
		{
			float min = 1000000000;
			int q;
			for (double i = z - M_PI * 40; i < z; i++)
			{

				if (abs(-(j - y) - 40 * tan(-(x - i) / 40)) < min) {
					min = abs(-(j - y) - 40 * tan(-(x - i) / 40));
					q = i;
				}
			}
			SetPixel(hdc, q, j, green);
		}
	}

};
	void Promeg()override {
		std::cout << "x[" << -10 - (x - 450) / 40 << ";" << 10 - (x - 450) / 40 << "] , y[" << -10 + (y - 450) / 40 << ";" << 10 + (y - 450) / 40 << "]" << endl;
	};
};

class Ctg : public Function {
public:
	void Print()override {
		for (float z = 50; z < 954; z = z + M_PI * 40)
		{
			for (double j = 50; j <= 850; j++)
			{
				float min = 1000000000;
				int q;
				for (double i = z - M_PI * 40; i < z; i++)
				{

					if (abs(-(j - y) - 40 * 1 / tan(-(x - i) / 40)) < min) {
						min = abs(-(j - y) - 40 * 1 / tan(-(x - i) / 40));
						q = i;
					}
				}
				SetPixel(hdc, q, j, green);
			}
		}
	};
	void Promeg()override {
		std::cout << "x[" << -10 - (x - 450) / 40 << ";" << 10 - (x - 450) / 40 << "] , y[" << -10 + (y - 450) / 40 << ";" << 10 + (y - 450) / 40 << "]" << endl;
	};
};

class Asin : public Function {
public:
	void Print()override {
		for (float j = 50; j <= 850; j++)
		{
			float min = 5;
			int q = -1;
			for (float i = 50; i <= 850; i++)
			{
				if (abs(-(j - y) - 40 * asin(-(x - i) / 40)) < min) {
					min = abs(-(j - y) - 40 * asin(-(x - i) / 40));
					q = i;
				}
			}
			SetPixel(hdc, q, j, green);
		}
	};
	void Promeg()override {
		std::cout << "x[" << -10 - (x - 450) / 40 << ";" << 10 - (x - 450) / 40 << "] , y[" << -10 + (y - 450) / 40 << ";" << 10 + (y - 450) / 40 << "]" << endl;
	};
};

class Acos : public Function {
public:
	void Print()override {
		for (float j = 50; j <= 850; j++)
		{
			float min = 5;
			int q = -1;
			for (float i = 50; i <= 850; i++)
			{
				if (abs(-(j - y) - 40 * acos(-(x - i) / 40)) < min) {
					min = abs(-(j - y) - 40 * acos(-(x - i) / 40));
					q = i;
				}
			}
			SetPixel(hdc, q, j, green);
		}
	};
	void Promeg()override {
		std::cout << "x[" << -10 - (x - 450) / 40 << ";" << 10 - (x - 450) / 40 << "] , y[" << -10 + (y - 450) / 40 << ";" << 10 + (y - 450) / 40 << "]" << endl;
	};
};

class Exp : public Function {
public:
	void Print()override {
		for (float j = 50; j < 850; j++)
		{
			float min = 10;
			int q = -1;
			for (float i = 50; i < 850; i++)
			{
				if (abs(-(j - y) - 40 * exp(-(x - i) / 40)) < min) {
					min = abs(-(j - y) - 40 * exp(-(x - i) / 40));
					q = i;
				}
			}
			SetPixel(hdc, q, j, green);
		}
		for (float i = 50; i < 850; i++)
		{
			float min = 10;
			int q = -1;
			for (float j = 50; j < 850; j++)
			{
				if (abs(-(j - y) - 40 * exp(-(x - i) / 40)) < min) {
					min = abs(-(j - y) - 40 * exp(-(x - i) / 40));
					q = j;
				}
			}
			SetPixel(hdc, i, q, green);
		}
	};
	void Promeg()override {
		std::cout << "x[" << -10 - (x - 450) / 40 << ";" << 10 - (x - 450) / 40 << "] , y[" << -10 + (y - 450) / 40 << ";" << 10 + (y - 450) / 40 << "]" << endl;
	};
};

class Ax : public Function {
public:float a;
public:
	Ax() {
		this->a = 0;
	}
	Ax(float a) {
		this->a = a;
	}
	void Set(float a) {
		this->a = a;
	}
	void Print()override {
		for (float j = 50; j <= 850; j++)
		{
			float min = 10;
			int q = -1;
			for (float i = 50; i <= 850; i++)
			{
				if (abs(-(j - y) - 40 * pow(a, (-(x - i) / 40))) < min) {
					min = abs(-(j - y) - 40 * pow(a, (-(x - i) / 40)));
					q = i;
				}
			}
			SetPixel(hdc, q, j, green);
		}
		for (float i = 50; i <= 850; i++)
		{
			float min = 10;
			int q = -1;
			for (float j = 50; j <= 850; j++)
			{
				if (abs(-(j - y) - 40 * pow(a, (-(x - i) / 40))) < min) {
					min = abs(-(j - y) - 40 * pow(a, (-(x - i) / 40)));
					q = j;
				}
			}
			SetPixel(hdc, i, q, green);
		}
	};
	void Promeg()override {
		std::cout << "x[" << -10 - (x - 450) / 40 << ";" << 10 - (x - 450) / 40 << "] , y[" << -10 + (y - 450) / 40 << ";" << 10 + (y - 450) / 40 << "]" << endl;
	};
};

int main() {
	std::cout << "Enter z(const), x(pryamaya), k(sinus), v(cosinus), b(tangens),n(cotangens),m(arcsinus),g(arccosinus),h(expanenta),i(a^x)" << endl;

	char ch = 0;
	char u = 0;
	Const a1;
	Pryamaya a2;
	Sin a3;
	Cos a4;
	Tg a5;
	Ctg a6;
	Asin a7;
	Acos a8;
	Exp a9;
	Ax a10;
	u = _getch();
	switch (u)
	{
	case 'z':
		std::cout << "Enter C : " ;
		float C;
		cin >> C;
		a1.Set(C);
		
		break;
	case 'x':
		float p, t;
		std::cout << "Enter k : ";
		cin >> p;
		std::cout << "Enter b : ";
		cin >> t;
		a2.Set(p, t);
		break;
	case 'c':

		break;
	case 'v':

		break;
	case 'b':

		break;
	case 'n':

		break;
	case 'm':
		
		break;
	case 'g':
		
		break;
	case 'h':
		
		break;
	case 'i':
		std::cout << "Enter a : ";
		float y;
		cin >> y;
		a10.Set(y);
		
		break;
	}

	while (true) {
		ch = _getch();
		switch (ch)
		{
		case 'r'://нарисовать ось с графиком
			std::system("cls");
			a1.Promeg();
			Draw();
			a1.Print();
			break;
		case 'w'://сместить вверх
			a1.Up();
			std::system("cls");
			a1.Promeg();
			Draw();
			a1.Print();
			break;
		case 's'://сместить вниз
			a1.Down();
			std::system("cls");
			a1.Promeg();
			Draw();
			a1.Print();
			break;
		case 'd'://сместить вправо
			a1.Right();
			std::system("cls");
			a1.Promeg();
			Draw();
			a1.Print();
			break;
		case 'a'://сместить влево
			a1.Left();
			std::system("cls");
			a1.Promeg();
			Draw();
			a1.Print();
			break;
		case '`':
			std::system("cls");
			std::cout << "FINISH" << endl;
			std::system("pause");
			return 0;
			break;
		}
	};
}