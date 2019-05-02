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
		cout << "Ââåäèòå èìÿ: ";
		cin >> firstName;
		cout << "Ââåäèòå ôàìèëèþ: ";
		cin >> lastName;
		cout << "Ââåäèòå âîçðàñò: ";
		cin >> years;
	}
	void print_data() {
		cout << "Èìÿ: " << firstName << endl;
		cout << "Ôàìèëèÿ: " << lastName << endl;
		cout << "Âîçðàñò: " << years << endl;
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
	child2.print_data();
	system("pause");
	return 0;
}
