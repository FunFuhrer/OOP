#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string name;
	int year;
public:
	Animal() {
		name = "";
		year = 0;
	}
	Animal(string name,int year) {
		this->name = name;
		this->year = year;
	}
	Animal getdata() {
		cout << name << year;
	}
};

class Dog :public Animal {
	string breed;
public:
	Dog(string breed) {
		this->breed = breed;
	}
};

class Cat :public Animal {
	string color;
public:
	Cat(string color) {
		this->color = color;
	}

};

int main() {
	system("pause");
	return 0;
}