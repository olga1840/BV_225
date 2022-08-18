#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TEMPERATURE
//#define TARGET
//#define CALC_1
//define - определить
//definition - определение
//#define SWITCH_SYNTAX

void main()
{
	setlocale(LC_ALL, "Rus");

#if defined TEMPERATURE
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif // TEMPERATURE

#ifdef TARGET
	int n;
	cout << "Введите число: "; cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Цель поражена" << endl;
	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}
#endif // TARGET

#if defined CALC_1	//Начало блока
//если определено CALC_1, то нижеследующий код, до директивы #endif,
//будет виден компилятору
	double a, b;	//Числа, вводимые с клавиатуры
	char s;			//Sign - знак операции
	cout << "Введите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation!" << endl;
	}
#endif				//Конец блока

#ifdef SWITCH_SYNTAX
	int var = 0;
	int code1 = 0;
	int code2 = 0;
	int codeN = 0;
	int default_code = 0;
#define CONST_1	1
#define CONST_2	2
#define CONST_N	'N'


	//Конструкция множественного выбора switch
	//if, который позволяет выбрать один из двух вариантов кода, в зависимости от условия,
	//switch позволяет выьрать один из множества вариантов кода, в зависимости от значения некоторой переменной.


	switch (var)
	{
	case CONST_1: code1; break;
	case CONST_2: code2; break;
		//........................
		//........................
	case CONST_N: codeN; break;
	default: default_code;
	}
#endif // SWITCH_SYNTAX


}