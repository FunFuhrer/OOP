#include <iostream>
#include <ctime>
using namespace std;
void Swap(int* m, int n) {
	int k;
	for (int i = 0; i < n; i++)
	{
		if (i%2==1)
		{
			k = m[i];
			m[i] = m[i-1];
			m[i - 1] = k;
		}
	}
	cout << endl;
}

int main()
{
	setlocale(0, "rus");
	srand(time(0));
	int size=12;
	int *arr;
	cout << endl;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
	cout << "Старый массив:\t\t";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	Swap(arr, size);
	cout << "Новый массив:\t\t";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	delete[] arr;
	system("pause");
	return 0;
}