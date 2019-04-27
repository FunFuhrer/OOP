#include <iostream>
#include <string>
using namespace std;

class Alive {
protected:
	string name;
	int year;
public:
	Alive() {
		name = "";
		year = 0;
	}
	Alive(string name, int year){
		this->name = name;
		this->year = year;
	}
};

class Bird :public Alive {
	int countWings;
public:
	Bird(int countWings){
		this->countWings = countWings;
	}
};

class Fish :public Alive {
	string type;
public:
	Fish(string type) {
		this->type = type;
	}
};

class Animal :public Alive {
	string typeAnimal;
public:
	Animal() {
		typeAnimal = "";
	}
	Animal(string typeAnimal){
		this->typeAnimal = typeAnimal;
		}
};

int main() {
	Animal a("cat");
	system("pause");
	return 0;
}