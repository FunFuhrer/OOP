#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	void setname(string name) {
		this->name = name;
	}
	void setgroup(string group) {
		this->group = group;
	}
	void setscores(int scores[5]) {
		for (int i = 0; i < 5; i++)
		{
			this->scores[i] = scores[i];
		}
	}
	string getname() {
		return name;
	}
	string getgroup() {
		return group;
	}
protected:
	string name, group;
	float averagescore;
	int scores[5];
};

class Staryj:public Student
{
public:
	void a_pochemu_ty_ne_na_pare(Staryj b ,Student a) {
		cout << b.getname() << ": Ty gde, " <<a.getname() <<"???"<<endl;
	}

private:
	string gmail;
};

int main()
{
	Student first;
	Staryj second;
	first.setname("Ivan");
	second.setname("Dima");
	second.a_pochemu_ty_ne_na_pare(second,first);
	system("pause");
	return 0;
}