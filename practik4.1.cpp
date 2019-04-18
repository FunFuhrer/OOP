#include <iostream>
using namespace std;
double* first(int n) {
	double* a = new double[n];
	return a;
}
void second(double* m, int n) {
	for (int i = 0; i < n; i++)
	{
		m[i] = i;
	}
}
void third(double* m, int n) {
	for (int i = 0; i < n; i++)
	{
		
	}
	cout << endl;
}
void fourth(double*m) {
	delete[] m;
}

int main()
{
	setlocale(0, "rus");
	int size=-1;
	double *arr;
	while (size != 0)
	{
		cout << "чтобы завершить задайте размер массива равный 0" << endl;
		cout << "Введите размерность массива: ";
		cin >> size;
		cout << endl;
		arr = first(size);
		second(arr, size);
		third(arr, size);
		fourth(arr);
			
	}

	system("pause");
	return 0;
}