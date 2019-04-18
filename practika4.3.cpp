#include <iostream>
#include <ctime>
using namespace std;
void init(int**a,int rows,int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			a[i][j] = rand() % 41 + 10;
		}
	}
}
void show(int**a, int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}


int main()
{
	setlocale(0, "rus");
	srand(time(0));
	int cols, rows;
	cout << "Строки: \t";
	cin >> rows;
	cout << endl;
	cout << "Столбцы:\t";
	cin >> cols;
	cout << endl;
	int **arr = new int*[rows]; 
	for (int i = 0; i < rows; i++)
		arr[i] = new int[cols]; 
	init(arr, rows, cols);
	cout << "Массив :" << endl;
	//show(arr, rows, cols);


	for (int i = 0; i < rows; i++)
		delete[] arr[i];
	system("pause");
	return 0;
}