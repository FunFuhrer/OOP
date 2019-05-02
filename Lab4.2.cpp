#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:
	string brand;
	int  size_h, size_w, price;
	Tiles(string brand, int size_h, int size_w, int price) {
		cout << "Made " << this << endl;
		this->brand = brand;
		this->size_h = size_h;
		this->size_w = size_w;
		this->price = price;
	}
	void getData() {
		cout << "Brend: " << brand << endl;
		cout << "H: " << size_h << endl;
		cout << "W: " << size_w << endl;
		cout << "price: " << price << endl;
	}
	Tiles(const Tiles &other) {
		cout << "Copy " << this << endl;
		this->brand = other.brand;
		this->size_h = other.size_h;
		this->size_w = other.size_w;
		this->price = other.price;
	}
	~Tiles() {
		cout << "destruction " << this<<endl;
	}
};
int main() {
	setlocale(0, "rus");
	Tiles tile1("0",0,0,0);
	tile1.brand = "nike";
	tile1.price = 14;
	tile1.size_h = 14;
	tile1.size_w = 88;
	Tiles tile2(tile1);
	tile2.getData();
	system("pause");
	return 0;
}
