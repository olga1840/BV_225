#include<iostream>
using namespace std;

int Add(int a, int b = 0, int c = 0);	//Прототип функции (Объявление функции - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);
void ASCII()
{
	cout << "Самурай без меча подобен самураю с мечем ;-)" << endl;
}

void main()
{
	setlocale(LC_ALL, "");
	ASCII();
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b, 5);	//Использование функции (Вызов функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;

	//Too few arguments in function call
	//Too many arguments in function call
	//Function doesn't take N arguments

	//				Default parameters
	//Redefinition of default parameter
}

int Add(int a, int b, int c)	//Реализация функции (Определение функции - Function definition)
{
	//Addition - сложение
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction - вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - умножение
	return a * b;
}
int Div(int a, int b)
{
	//Division - деление
	return a / b;
}