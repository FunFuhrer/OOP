#include <iostream>
#include<string>
using namespace std;
class Human {
protected:
	string surname, name, midname;
	int age;
public:
	Human() {
		surname = "";
		name = "";
		midname = "";
		age = 0;
	};
	Human(string surname, string name, string midname, int age) {
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
	}
	virtual void print() {
		cout << surname << " " << name << " " << midname << " " << age << " ������� "<<endl;
	}
	~Human() {}
};

class Student :public Human {
	bool on_lesson;
public:
	Student() {
		on_lesson = false;
	}
	Student(string surname, string name, string midname, int age, bool on_lesson) : Human(surname, name, midname, age) {
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
		this->on_lesson = on_lesson;
	}
	void print()override
	{
		cout << surname << " " << name << " " << midname << " " << age << " ������� ";
		if (on_lesson)cout << "�� �����" << endl;
		else cout << "��!!! �� �����" << endl;
	}
	~Student() {};
};

class Boss :public Human {
	int number_of_workers;
public:
	Boss() {
		number_of_workers = 0;
	}
	Boss(string surname, string name, string midname, int age, int number_of_workers) : Human(surname, name, midname, age) {
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
		this->number_of_workers = number_of_workers;
	}
	void print()override
	{
		cout << surname << " " << name << " " << midname << " " << age << " ������� ����� "<< number_of_workers<<" ���������� ����������"<<endl;
	}
	~Boss() {};
};


int main() {
	setlocale(LC_ALL, "ru");
	Student student1("������","����","��������",18,false);
	Boss boss1("������", "����", "��������", 40, 30);
	Human human1("�������", "������", "���������", 27);
	Human *date1 = &student1;
	Human *date2 = &boss1;
	Human *date3 = &human1;
	date1->print();
	date2->print();
	date3->print();
	system("pause");
	return 0;
}