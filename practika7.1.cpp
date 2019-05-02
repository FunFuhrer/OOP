#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	virtual void MakeVoice() = 0;
};
class Cat : public Animal {
public:
	void MakeVoice() override {
		cout << "Meow!!!" << endl;
	}
};
class Dog : public Animal {
public:
	void MakeVoice() override {
		cout << "Woof!!!" << endl;
	}
};
class Parrot : public Animal {
public:
	void MakeVoice() override {
		cout << "WTF!!!" << endl;
	}
};
int main() {
	Cat a;
	Dog b;
	Parrot c;
	Animal *voice1 = &a;
	voice1->MakeVoice();
	Animal *voice2 = &b;
	voice2->MakeVoice();
	Animal *voice3 = &c;
	voice3->MakeVoice();
	system("pause");
	return 0;
}