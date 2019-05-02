#include <iostream>
#include <string>
using namespace std;

class Screen {
protected:
	double width, length;
public:
	virtual void diagonal() = 0;
};
class Keyboard {
protected:
	int key;
public:
	virtual void countkey() = 0;
};
class Notebook :public Screen, public Keyboard {
	string brand;
public:
	void setBrand(string brand) {
		this->brand = brand;
	}
	void printBrand() {
		cout << "Brand : " <<brand<< endl;
	}
	void diagonal() override {
		cout << "Diagonali = 17.3" << endl;
	}
	void countkey() override {
		cout << "countkey = 50" << endl;
	}
};
class Phone :public Screen, public Keyboard {
	string brand;
public:
	void setBrand(string brand) {
		this->brand = brand;
	}
	void printBrand() {
		cout << "Brand : " << brand << endl;
	}
	void diagonal() override {
		cout << "Diagonali = 6.7" << endl;
	}
	void countkey() override {
		cout << "countkey = 0" << endl;
	}
};
class PC :public Screen, public Keyboard {
	string brand;
public:
	void setBrand(string brand) {
		this->brand = brand;
	}
	void printBrand() {
		cout << "Brand : " << brand << endl;
	}
	void diagonal() override {
		cout << "Diagonali = 35" << endl;
	}
	void countkey() override {
		cout << "countkey = 70" << endl;
	}
};

int main() {
	Notebook a;
	a.setBrand("MSI");
	Phone b;
	b.setBrand("SONY");
	PC c;
	c.setBrand("Noname");
	Screen  *data1 = &a;
	Keyboard *data2 = &a;
	a.printBrand();
	data1->diagonal();
	data2->countkey();
	cout << endl;

	Screen  *data3 = &b;
	Keyboard *data4 = &b;
	b.printBrand();
	data3->diagonal();
	data4->countkey();
	cout << endl;

	Screen  *data5 = &c;
	Keyboard *data6 = &c;
	c.printBrand();
	data5->diagonal();
	data6->countkey();
	cout << endl;

	system("pause");
	return 0;
}