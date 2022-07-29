#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS	//1) Арифметические операторы
//#define ASSIGNMENT_OPERATOR		//2) Оператор присваивания =
//#define INCREMENT_DECREMENT		//3) (++/--)
#define COMPOUND_ASSIGNMENTS		//4) Составные присваивания

void main()
{
	setlocale(LC_ALL, "");
	//					Операторы C++
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary multiply
	//*3;		//Оператор умножения может быть только бинарным

#ifdef ARITHMETICAL_OPERATORS
	//Unary:	+ -
	//Binary:	+ - * / %
	//% - остаток от деления
	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	//cout << 3. % 17 << endl;
#endif

#ifdef ASSIGNMENT_OPERATOR
	
	//			l-value = r-value;

	//(=) переменной слева (l-value) присваивает значение выражения справа (r-value).
	//Присвоить значит "записать", "сохранить в памяти", "запомнить", "дать значение".
	//r-value - что присваиваем
	//l-value - кому присваиваем
	//int a = 2;	//Переменной 'a' присвоить значение '2'
	//int b = 3;	//Переменной 'b' присвоить значение '3'
	//a = b;		//Переменной 'a' присвоить значение переменной 'b'

	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
	//ассоциативность
	a = b + c * 4 - 2 * 4;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement
#endif

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	
	//a = a + b;//Оператор сложить
	a += b;		//Оператор ПРИБАВИТЬ
	//	-=		//Оператор ОТНЯТЬ
	//	*=
	//	/=
	//	%=

#endif // COMPOUND_ASSIGNMENTS

}