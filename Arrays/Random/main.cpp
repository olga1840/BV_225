//Random
#include<iostream>
using namespace std;

/*
	rand() - возвращает псевдослучайное число в диапазоне от 0 до RAND_MAX = 32 767
*/

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}