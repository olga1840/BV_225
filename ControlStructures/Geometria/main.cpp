//Geometria
#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
#define TRIANGLE_4
#define RUMBUS
#define PLUS_MINUS

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)	//этот for повторяет вывод строки на экран
	{
		for (int i = 0; i < n; i++)	//этот for выводит на экран строку из звездочек
		{
			cout << "* ";
		}
		cout << endl;	//после вывода строки переходим на новую строку
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	//	 Start	  ;	Stop ; Step
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
			//((i + j) % 2 == 0) ? cout << "+ " : cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
}