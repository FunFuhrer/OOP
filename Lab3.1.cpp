#include <iostream>
#include <string>
using namespace std;

class Children {
	string firstName;
	string lastName;
	int years;
public:
	void set_data() {
		cout << "������� ��� �������: ";
		cin >> firstName;
		cout << "������� ������� �������: ";
		cin >> lastName;
		cout << "������� ������� �������: ";
		cin >> years;
	}
	void print_data() {
		cout << "��� �������: " << firstName << endl;
		cout << "������� �������: " << lastName << endl;
		cout << "������� �������: " << years << endl;
	}
};
int main() {
	setlocale(0, "rus");
	Children child1, child2;
	child1.set_data();
	child2.set_data();
	child1.print_data();
	child2.print_data();
	system("pause");
	return 0;
}