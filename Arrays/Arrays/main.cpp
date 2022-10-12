#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 15;
	int arr[SIZE] = { 3, 5, 8 };
	//arr[3] = 123;	//обращаемся к элементу массива на запись
	//cout << arr[3] << endl;//обращение к элементу массива на чтение
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}