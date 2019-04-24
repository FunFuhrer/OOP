#include <iostream>
#include <string>
using namespace std;

class Children {
	string firstName;
	string lastName;
	int years;
public:
	void set_data() {
		cout << "¬ведите им€ ребенка: ";
		cin >> firstName;
		cout << "¬ведите фамилию ребенка: ";
		cin >> lastName;
		cout << "¬ведите возраст ребенка: ";
		cin >> years;
	}
	void print_data() {
		cout << "им€ ребенка: " << firstName << endl;
		cout << "фамили€ ребенка: " << lastName << endl;
		cout << "возраст ребенка: " << years << endl;
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