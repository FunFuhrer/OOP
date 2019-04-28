#include <iostream>
using namespace std;

class Property {	// Базовый класс "Собственность"
protected:
	double worth;
public:
	Property(double worth) {
		this->worth = worth;
	}

	virtual double calculateTax() = 0;

	virtual ~Property() {
	}
};

class Appartment : public Property {	// Производный класс "Квартира"
public:
	Appartment(double worth) : Property(worth) {};
	double calculateTax() {
		return worth / 1000;
	}
};

class Car : public Property {	// Производный класс "Автомобиль"
public:
	Car(double worth) : Property(worth) {};
	double calculateTax() {
		return worth / 200;
	}
};

class CountryHouse : public Property {	// Производный класс "Загородный дом"
public:
	CountryHouse(double worth) : Property(worth) {};
	double calculateTax() {
		return worth / 500;
	}
};

int main() {
	Property *p[7];

	for (int i = 0; i < 7; i++) {
		double worth;
		cout << "Enter worth of the " << i + 1 << " : ";
		cin >> worth;
		if (i < 3) {
			p[i] = new Appartment(worth);
		}
		else {
			if (i < 5) {
				p[i] = new Car(worth);
			}
			else {
				p[i] = new CountryHouse(worth);
			}
		}
	}

	cout << "Taxes:" << endl;
	for (int i = 0; i < 7; i++) {
		cout << i + 1 << ". " << p[i]->calculateTax() << endl;
	}

	system("pause");
	delete[] p;
	return 0;
}