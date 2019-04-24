#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:
	string brand;
	int  size_h, size_w, price;
	void getData() {
		cout << "Бренд: " << brand << endl;
		cout << "Длина: " << size_h << endl;
		cout << "Высота: " << size_w << endl;
		cout << "Цена: " << price << endl;
	}
};
int main() {
	setlocale(0, "rus");
	Tiles tile1, tile2;
	tile1.brand = "nike";
	tile2.brand = "puma";
	tile1.price = 14;
	tile2.price = 4;
	tile1.size_h = 14;
	tile1.size_w = 88;
	tile2.size_h = 13;
	tile2.size_w = 37;
	tile1.getData();
	tile2.getData();
	system("pause");
	return 0;
}