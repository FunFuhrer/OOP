#include <iostream>
#include "string"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	string name;
	cout << "������� ���� ��� : ";
	cin >> name;
	cout << "������� ������� �����, " << name << "!!!" << endl;
	system("pause");
	return 0;
}