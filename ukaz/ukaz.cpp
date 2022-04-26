#include "ukaz.h"
int max(vector <int> a, int n) {
	int numb = 0, max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max)
			numb = i;
	}
	return numb;
}
int min(vector <int> a, int n) {
	int numb = 0, min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min)
			numb = i;
	}
	return numb;
}
void beginning(vector <int> a, int n) {
	swap(a[min(a, n)], a[0]);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << '|';
	}
}
void end(vector <int> a, int n) {
	swap(a[max(a, n)], a[n-1]);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << '|';
	}
}
int sum(int* a, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
void invert(int* a, int n) {
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 9; j > 0; j--)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}


}
void increase(int* a, int n) {
	for (int startIndex = 0; startIndex < n - 1; startIndex++)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < n; currentIndex++)
		{
			if (a[currentIndex] < a[smallestIndex])
				smallestIndex = currentIndex;
		}
		swap(a[startIndex], a[smallestIndex]);
	}


}
void decrease(int* a, int n) {
	for (int startIndex = 0; startIndex < n - 1; startIndex++)
	{
		int biggestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < n; currentIndex++)
		{
			if (a[currentIndex] > a[biggestIndex])
				biggestIndex = currentIndex;
		}
		swap(a[startIndex], a[biggestIndex]);
	}


}
void (*massive(int* a, int n))(int* a, int n) {
	if (sum(a, n) == a[0]) {
		return invert;
	}
	if (sum(a, n) > a[0]) {
		return increase;
	}
	if (sum(a, n) < a[0]) {

		return decrease;
	}
}