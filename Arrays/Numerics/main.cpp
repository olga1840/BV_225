//Numericsi
#include<iostream>
using namespace std;

//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "");
	//for (int i = 0; i < 256; i++)cout << i << "\t" << (char)i << endl;
	int decimal;		//десятичное число, введенное с клавиатуры
	cout << "Введите десятичное число: "; cin >> decimal;
	cout << decimal << endl;

#ifdef DEC_2_BIN
	const int n = 32;
	bool bin[n] = {};	//этот массив будет хранить разряды двоичного числа
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

	const int n = 8;
	char hex[n] = {};	//Этот массив будет хранить шестнадцатеричное число
	int i = 0;
	for (; decimal; i++, decimal /= 16)
	{
		hex[i] = decimal % 16;
	}

	for (--i; i >= 0; i--)
	{
		/*switch (hex[i])
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		cas
e 15:cout << "F"; break;
		default:cout << hex[i];
		}*/

		//if (hex[i] < 10)cout << hex[i];	else cout << char(hex[i] + 55);
		//(hex[i] < 10) ? cout << hex[i] : cout << char(hex[i] + 55);
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		//cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
		hex[i] += hex[i] < 10 ? 48 : 55;
		cout << hex[i];
	}
	cout << endl;
}