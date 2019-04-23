#include <iostream>
#include <ctime>

using namespace std;
void invert(int *arr, int size) {
	int t;
	for (int i = 0; i <= size/2; i++) {
		t = arr[i];
		arr[i] = arr[size-1 - i];
		arr[size - 1 - i] = t;
	}
}
void sort1(int *arr, int size) {
	for (int i = 0; i < size-1 ; i++)
		for (int j = i+1; j <size ; j++)
			if (arr[j] < arr[i])
				swap(arr[j], arr[i]);
}
void sort2(int *arr, int size) {
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (arr[j] > arr[i])
				swap(arr[j], arr[i]);
}

void(*foopointer(int *arr, int size))(int *arr, int size) {
	int sum = 0;
	for (int i = 1; i < size; i++)
		sum += arr[i];
	if (sum == arr[0])
		return invert;
	if (sum > arr[0])
		return sort1;
	if (sum < arr[0])
		return sort2;
}

int main()
{
	setlocale(0, "rus");
	srand(time(NULL));

	int n;
	cout << "Размер массива : ";
	cin >> n;
	int *arr = new int[n];
	cout << "\nНаш массив : ";
		for (int i = 0; i < n; i++)
		{
			//arr[i] = rand() % 51 - 25;
			arr[i] = rand() % 3 - 1;
			cout << arr[i] << " ";
		} 
	for (int i = 0; i < n; i++)
	foopointer(arr, n)(arr, n);

	cout << "\nМассив после преобразований : ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}