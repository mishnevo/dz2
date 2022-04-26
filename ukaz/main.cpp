#include "ukaz.h"

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Первая часть задания: " << endl << "Введите размер массива: ";
	void (*maxmin)(vector <int>, int);
	int n;
	cin >> n;
	vector <int> a;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a.push_back(rand() % 20);
		cout << a[i] << '|';
	}
	cout << endl;
	if (min(a, n) < max(a, n)) {
		maxmin = beginning;
	}
	else {
		maxmin = end;
	}
	maxmin(a, n);

	cout << endl << "Вторая часть задания: " <<endl ;

	const int z = 5;
	int b[z];
	srand(time(NULL));
	for (int i = 0; i < z; i++)
	{
		b[i] = rand() % 41 - 20;
		cout << b[i] << '|';
	}
	cout << endl;
	massive(b, z)(b, z);
	for (int i = 0; i < z; i++)
	{
		cout << b[i] << '|';
	}

}