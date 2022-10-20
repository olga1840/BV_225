//Numerics
#include<iostream>
using namespace std;

//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "");
#ifdef DEC_2_BIN
	const int n = 32;
	bool bin[n] = {};	//этот массив будет хранить разряды двоичного числа
	int decimal;		//десятичное число, введенное с клавиатуры
	cout << "Введите десятичное число: "; cin >> decimal;
	cout << decimal << endl;
	int i = 0;	//номер разряда
//	for (Start;	Stop; Step)
	for (/*Пустое выражение*/; decimal; i++, decimal /= 2)
	{
		//Оператор ',' (Comma operator)
		bin[i] = decimal % 2;	//Получаем младший разряд двоичного числа
		//decimal /= 2;			//Убираем полученный младший разряд из десятичного числа
		//i++;					//переходим к следующему рпзряду
	}
	//Выводим остатки от деления в обратном порядке:
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
#endif // DEC_2_BIN

}