#include <iostream>
#include <ctime>

using namespace std;
template <typename T>
void bublesort(T* arr, int size) {
	T temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "ћассив отсортирован(пузырькова€ сортировка)\n";
}

template <typename T>
void selectSort(T* a, int size) {
	int i, j, k;
	T x;
	for (i = 0; i < size; i++) {
		k = i; x = a[i];

		for (j = i + 1; j < size; j++)
			if (a[j] < x) {
				k = j; x = a[j];
			}

		a[k] = a[i]; a[i] = x;
	}
	cout << "ћассив отсортирован(сортировка выбором)\n";
}


template <typename T>
void insertSort(T* a, long size) {
	T x;
	long i, j;
	for (i = 0; i < size; i++) {
		x = a[i];
		for (j = i - 1; j >= 0 && a[j] > x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
	cout << "ћассив отсортирован(сортировка вставками)\n";
}

template <typename T1, typename T2>
T2 sum(T1 a, T2 b) {
	return a + b;
}
template <typename T1, typename T2>
T2 diff(T1 a, T2 b) {
	return a - b;
}
template <typename T1, typename T2>
T2 mul(T1 a, T2 b) {
	return a * b;
}
template <typename T1, typename T2>
T2 divide(T1 a, T2 b) {
	return a / b;
}
int main()
{
	srand(time(NULL));
	setlocale(0, "rus");
	int size; 
	cout << "n = ";
	cin >> size;
	int * arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
		cout << "arr[" << i << "] = "<< arr[i] << "\t";
	}
	cout << endl<<"¬ыберите способ сортировки(1-пузырькова€,2-выбором,3-вставками): ";
	int k;
	cin >> k;
	switch (k)
	{
	case 1:{bublesort(arr, size); break;}
	case 2:{selectSort(arr, size); break;}
	case 3:{insertSort(arr, size); break;}
	default:
		break;
	}
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = "<< arr[i] << "\t";
	}
	delete[] arr;
	cout << "«адание 4" << endl;
	int a;
	double b;
	cout << "¬ведите a и b(a - целое, b - дробное)\n";
	cin >> a >> b;
	cout << sum(a, b) << ' ' << diff(a, b) << ' ' << mul(a, b) << ' ' << divide(a, b) << endl;
	system("pause");
	return 0;
}