#include "Header.h"

using std::swap;



void invert(int*mas, unsigned size) {
	cout << "Cумма элементов в массиве равна его первому элементу\n";
	int c = 0;
    for (int i = 0; i < (size / 2); i++) {
        c = mas[i];
        mas[i] = mas[size - 1 - i];
        mas[size - 1 - i] = c;
    }
    for (int i = 0; i < size; i++) {
        cout << mas[i] << " ";
    }
}

void vozr(int*mas, unsigned size) {
	cout << "Cумма элементов в массиве больше его первого элемента\n";
	const int N = size;
	for (int i = 0; i < N - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < N; j++)
		{
			if (mas[j] < mas[min])
				min = j;
		}
		swap(mas[i], mas[min]);
	}
	for (int i = 0; i < N; i++)
		cout << mas[i] << ' ';
}

void ub(int* mas, unsigned size) {
	cout << "Cумма элементов в массиве меньше его первого элемента\n";
	const int N = size;
	for (int i = 0; i < N - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < N; j++)
		{
			if (mas[j] < mas[min])
				min = j;
		}
		swap(mas[i], mas[min]);
	}
	for (int i = N - 1; i >= 0; i--)//Выводим массив в обратном порядке
		cout << mas[i] << " ";
}

int sum(int a, int b) {
	int s = 0;
	s = a + b;
	return s;
}

int mapp(int* arr, unsigned size, int (*fun)(int, int)) {
	int m = fun(arr[0], arr[1]);
	for (unsigned i = 2; i < size; i++) {
		m = fun(m, arr[i]);
	}
	return m;
}
void printArr(int* arr, unsigned size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void (*fun(int* mas, int m))(int* x, int size) {
	if (mas[0] == mapp(mas, m, sum)) {
		invert(mas, m);
	}
	else if (mas[0] < mapp(mas, m, sum)) {
		vozr(mas, m);
	}
	else if (mas[0] > mapp(mas, m, sum)) {
		ub(mas, m);
	}
	return 0;
}