#include <iostream>
using namespace std;
void foo1() {
	cout << "��������� 1 �������"<< endl;
}
void foo2() {
	cout << "��������� 2 �������" << endl;
}
void foo3() {
	cout << "��������� 3 �������" << endl;
}
void (*foopointer)();
int main()
{
	setlocale(0, "rus");
	int k=1;
	while ((k == 1) || (k == 2) || (k == 3)) {
		cout << "������� ����� ������� ������� ������ �������(1,2 ��� 3)" << endl;
		cin >> k;
		switch (k)
		{
		case 1:
			foopointer = foo1;
			break;
		case 2:
			foopointer = foo2;
			break;
		case 3:
			foopointer = foo3;
			break;
			default:
				break;
		}
		foopointer();
	};
	system("pause");
	return 0;
}