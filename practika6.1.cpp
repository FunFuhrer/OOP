#include <iostream>
#include <string>
using namespace std;

class Property {
protected:
	float worth;
public:
	Property(float worth) {
		this->worth = worth;
	}
	virtual float raschet() =0;
	~Property() {
	}
};
class Appartment :public Property {
	string name;
public:
	Appartment(string name, float worth) :Property(worth) {
		this->name = name;
		this->worth = worth;
	}
	float raschet() override {
		return  worth / 1000;
	}
};
class CountryHouse :public Property {
	float square;
public:
	CountryHouse(float square, float worth) :Property(worth) {
		this->square = square;
		this->worth = worth;
	}
	float raschet() override {
		return  worth / 500;
	}
};

class Car :public Property {
	string brand;
public:
	Car(string brand, float worth) :Property(worth) {
		this->brand = brand;
		this->worth = worth;
	}
	float raschet() override {
		return  worth / 200;
	}
};

int main() {
	Property* arr[7];
	arr[0] = new Appartment("main",15000000);
	arr[1] = new Appartment("rent room 1",3000000);
	arr[2] = new Appartment("rent room 2",2500000);
	arr[3] = new Car("Nissan",600000);
	arr[4] = new Car("Skoda",1100000);
	arr[5] = new CountryHouse(45,450000);
	arr[6] = new CountryHouse(30,300000);
	float cost = 0;
	for (int i = 0; i < 7; i++) {
		cost = cost + arr[i]->raschet();
	}
	cout << "velichina naloga dlja vseh ob#ektov : " << cost;

	system("pause");
	delete[] arr;
	return 0;
}