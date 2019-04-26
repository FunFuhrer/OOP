#include <iostream>
#include <string>
using namespace std;

class Children {
	string firstName;
	string lastName;
	int years;
public:
	Children(string firstName, string lastName, int years) {
		cout << "Made " << this << endl;
		this->firstName = firstName;
		this->lastName = lastName;
		this->years = years;
	}
	void set_data() {
		cout << "������� ���: ";
		cin >> firstName;
		cout << "������� �������: ";
		cin >> lastName;
		cout << "������� �������: ";
		cin >> years;
	}
	void print_data() {
		cout << "���: " << firstName << endl;
		cout << "�������: " << lastName << endl;
		cout << "�������: " << years << endl;
	}
	Children(const Children &other) {
		cout << "Copy " << this << endl;
		this->firstName = other.firstName;
		this->lastName = other.lastName;
		this->years = other.years;
	}

	~Children() {
		cout << "Dekonstruktor " << this << endl;
	}
};
int main() {
	setlocale(0, "rus");
	Children child1("a","b",0);
	child1.set_data();
	Children child2(child1);
	system("pause");
	return 0;
}