#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double a;
	double b;
	cout << "������� �������� a : ";
	cin >> a;
	cout << "������� �������� b : ";
	cin >> b;
	cout << "����� a � b = " << a + b << endl;
	cout << "�������� a � b = " << a - b << endl;
	cout << "��������� a � b = " << a * b << endl;
	cout << "������� a � b = " << a / b << endl;
	system("pause");
	return 0;
}