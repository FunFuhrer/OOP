#include <iostream>
#include "string"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	string name;
	cout << "Введите ваше имя : ";
	cin >> name;
	cout << "Доброго времени суток, " << name << "!!!" << endl;
	system("pause");
	return 0;
}