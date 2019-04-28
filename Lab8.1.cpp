#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Student {
	bool on_lesson;
	string surname, name, midname;
	int age;
public:
	Student() {
		on_lesson = false;
	}
	Student(string surname, string name, string midname, int age, bool on_lesson) {
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
		this->on_lesson = on_lesson;
	}
	void print()
	{
		cout << surname << " " << name << " " << midname << " " << age << " godikov ";
		if (on_lesson)cout << "na parah" << endl;
		else cout << "NE!!! NA PARAH" << endl;
	}
	~Student() {};
};
int main() {
	vector<Student> student;
	Student studentik1("Ivanov", "Ivan", "Ivanovich", 22, false);
	Student studentik2("Petrov", "Petr", "Petrovich", 18, true);
	student.push_back(studentik1);
	student.push_back(studentik2);
	student[0].print();
	student[1].print();
	system("pause");
	return 0;
}