#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a;
	double b;
	cout << "Введите значение a : ";
	cin >> a;
	cout << "Введите значение b : ";
	cin >> b;
	cout << "Сумма a и b = " << a + b << endl;
	cout << "Разность a и b = " << a - b << endl;
	cout << "Умножение a и b = " << a * b << endl;
	cout << "Частное a и b = " << a / b << endl;
	system("pause");
	return 0;
}