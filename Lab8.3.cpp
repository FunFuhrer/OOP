#include <iostream>
#include <string>
#include<queue>
using namespace std;

class Auto {
	string brand, model;
public:
	Auto() {
		brand = "";
		model = "";
	}
	Auto(string brand, string model) {
		this->brand = brand;
		this->model = model;
	}
	void Print() {
		cout << "Brand : " << brand << " Model : " << model << endl;
	}
};

int main() {
	queue<Auto> automobiles;
	Auto first("Nissan", "Grand Cherokee"), second("Skoda", "Octavia");
	automobiles.push(first);
	automobiles.push(second);
	automobiles.back().Print();
	automobiles.front().Print();

	system("pause");
	return 0;
}