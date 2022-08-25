#include<iostream>
#include<windows.h>
//#include<conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define CALC_IF
//#define CALC_SWITCH
//#define TICKET
#define CHESS_BOARD
int main()
{

#ifdef CALC_IF

	setlocale(LC_ALL, "Rus");
	double number1, number2;
	char oper;
	cout << "Введите выражение: ";
	cin >> number1 >> oper >> number2;
	if (oper == '+')
	{
		cout << "Выражение: " << number1 << " + " << number2 << " = " << number1 + number2 << endl;
	}
	else if (oper == '-')
	{
		cout << "Выражение: " << number1 << " - " << number2 << " = " << number1 - number2 << endl;
	}
	else if (oper == '/')
	{
		cout << "Выражение: " << number1 << " / " << number2 << " = " << number1 / number2 << endl;
	}
	else if (oper == '*')
	{
		cout << "Выражение: " << number1 << " * " << number2 << " = " << number1 * number2 << endl;
	}

#endif CALC_IF

#ifdef CALC_SWITCH

	setlocale(LC_ALL, "Rus");
	double number1, number2;
	char oper;
	cout << "Введите выражение: ";
	cin >> number1 >> oper >> number2;
	switch (oper)
	{
	case '-': cout << "Выражение: " << number1 << " - " << number2 << " = " << number1 - number2 << endl; break;
	case '+': cout << "Выражение: " << number1 << " + " << number2 << " = " << number1 + number2 << endl; break;
	case '*': cout << "Выражение: " << number1 << " * " << number2 << " = " << number1 * number2 << endl; break;
	case '/': cout << "Выражение: " << number1 << " / " << number2 << " = " << number1 / number2 << endl; break;
	}

#endif CALC_SWITCH

#ifdef TICKET

	setlocale(LC_ALL, "Rus");
	int tic_num, a, b, c, d, e, f;
	cout << "Введите номер билета: " << endl;
	cin >> tic_num;
	a = tic_num / 100000;
	b = tic_num % 1000000 / 100000;
	b = tic_num % 100000 / 10000;
	c = tic_num % 10000 / 1000;
	d = tic_num % 1000 / 100;
	e = tic_num % 100 / 10;
	f = tic_num % 10;
	if (a + b + c == d + e + f)
		cout << "Билет счастливый!!!" << endl;
	else
		cout << "Обычный билет." << endl;

#endif TICKET

#ifdef CHESS_BOARD

	cout << "\n\t";
	char i;
	char j = 0;
	for (i = 'A'; i <= 'H'; ++i)
	{
		cout << ' ' << i;
	}
	cout << endl;
	for (i = 1; i <= 8; i++)
	{
		cout << "\t";
		for (int j = 1; j <= 8; j++)
		{
			if (i % 2 == 1)
			{
				if (j % 2 == 1)
				{
					cout << " " << char(255);
				}
				else
				{
					cout << " " << char(254);
				}
			}
			if (i % 2 == 0)
			{
				cout << " ";
				if (j % 2 == 0)
				{
					cout << char(255);
				}
				else
				{
					cout << char(254);
				}
			}
			if (i == 1)
			{
				if (j == 8)
				{
					cout << " " << 8;
				}

			}
			if (i == 2)
			{
				if (j == 8)
				{
					cout << " " << 7;
				}
			}
			if (i == 3)
			{
				if (j == 8)
				{
					cout << " " << 6;
				}
			}
			if (i == 4)
			{
				if (j == 8)
				{
					cout << " " << 5;
				}
			}
			if (i == 5)
			{
				if (j == 8)
				{
					cout << " " << 4;
				}
			}
			if (i == 6)
			{
				if (j == 8)
				{
					cout << " " << 3;
				}
			}
			if (i == 7)
			{
				if (j == 8)
				{
					cout << " " << 2;
				}
			}
			if (i == 8)
			{
				if (j == 8)
				{
					cout << " " << 1;
				}
			}
		}
		cout << ("\n");
	}
	cout << ("\n \n");

#endif CHESS_BOARD
}