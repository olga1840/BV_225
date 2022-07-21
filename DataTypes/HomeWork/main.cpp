#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double money;	//объявляем дробную переменну,
	cout << "Введите сумму перевода: "; cin >> money;
	cout << money << endl;
	money += 1e-10;
	int grn = money;	//неявное преобразование типов из double в int
	cout << grn << " грн.\t";
	int cop = (money - grn) * 100;
	cout << cop << " коп.\n";
}
