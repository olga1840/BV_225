//Loops
#include<iostream>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WHILE_1
//#define WHILE_2
//#define PALINDROME

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef WHILE_1
	int n;		//Количество итераций
	int i = 0;	//Счетчик цикла
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << " Hello World\n";
		i++;	//Шаг цикла
	}
#endif // WHILE_1

#ifdef WHILE_2
	cout << (int)ULLONG_MAX << endl;

	int n;	//Количество итераций
	cout << "Количество итераций: "; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
		//n--;
	}
	cout << endl;
#endif // WHILE_2

#ifdef PALINDROME
	int number;		//число, вводимое с клавиатуры
	int reverse = 0;//число, записанное задом наперед
	cout << "Введите число: "; cin >> number;
	int buffer = number;//копия числа, введенного с клавиатуры,
	//эта копия нужна для того, чтобы исходные данные, введенные пользователем
	//остались неизменны.
	while (buffer)
	{
		reverse *= 10;	//освобождаем место для следующего младшего рпзряда
		reverse += buffer % 10;	//получаем младший разряд числа
		buffer /= 10;//удаляем полученный ранее младший разряд
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Это обычное число" << endl;
	}
#endif // PALINDROME

	int number;
	cout << "Введите номер билета, для посадки на рейс: "; cin >> number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	while (number >= 1000)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "Счастливый билет" << endl;
	}
	else
	{
		cout << "Как-нибудь в другой раз" << endl;
	}
}

/*
--------------------------------------------------------
while - цикл с предусловием
do...while - цикл с постусловием
for - цикл на заданное число итераций

Итерация - это однократное выполнение тела цикла.
Тело цикла - это код, который нужно зациклить (многократно выполнить).
--------------------------------------------------------
*/