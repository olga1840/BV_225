//NestedFORs
#include<iostream>
#include<Windows.h>
using namespace std;

//for-ы
//#define CLOCK

void main()
{
	setlocale(LC_ALL, "");
#ifdef CLOCK
	for (int dd = 0; dd < 365; dd++)
	{
		for (int hh = 0; hh < 24; hh++)//основной (внешний) цикл
		{
			//счетчика 'j' еще нет
			for (int mm = 0; mm < 60; mm++)//вложенный for
			{
				for (int ss = 0; ss < 60; ss++)
				{
					system("CLS");
					cout << hh << ":" << mm << ":" << ss << endl;
					Sleep(1000);
				}
			}
			//счетчика 'j' уже нет
		}
	}
#endif // CLOCK

	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
}