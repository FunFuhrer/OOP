#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
	virtual void CountPassenger() = 0;
};
class Auto : public Vehicle {
public:
	void CountPassenger() override {
		cout << "5 Passenger" << endl;
	}
};
class Bus : public Vehicle {
public:
	void CountPassenger() override {
		cout << "1000000 Passenger" << endl;
	}
};
class Bicycle : public Vehicle {
public:
	void CountPassenger() override {
		cout <<"1 Passenger"  << endl;
	}
};
int main() {
	Bicycle a;
	Auto b;
	Bus c;
	Vehicle *passenger1 = &a;
	passenger1->CountPassenger();
	Vehicle *passenger2 = &b;
	passenger2->CountPassenger();
	Vehicle *passenger3 = &c;
	passenger3->CountPassenger();

	system("pause");
	return 0;
}