


#include <iostream>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
enum Color { Black = 0, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };
enum Direction { Up = 72, Left = 75, Right = 77, Down = 80, Enter = 13, esc = 27, spase = 32 };
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);//получает дискриптор активного окна

void SetColor(Color text, Color background)
{
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void SetCursor(int x, int y)
{
	COORD myCoords = { x,y };//инициализируем передаваемыми значениями объект координат
	SetConsoleCursorPosition(hStdOut, myCoords);
}
int menu();



int main()
{
	setlocale(LC_ALL, "RUS");
	int poz = 0;
	do
	{
		system("cls");
		poz = menu();
		system("cls");
		switch (poz)
		{
		case 0:
		{

			cout << "----Программа для вы чесления факториала----" << endl;
			int a;
			char Answer = 'Y';
			do {
				system("cls");
				cout << "Введите целое положительное число для которого нужно узнать Факториал" << endl;


				do {

					cin >> a;
					if (a == 0 || a == 1)
					{

						cout << "Факториал будет равен " << 1 << endl;


					}
					else if (a < 0)
					{
						cout << "Введенно отрицательное число!! Повторите ввод" << endl;

					}

				} while (a < 0);


				int b = 1;
				cout << a << endl;
				for (int i = 1; i < a + 1; i++)
				{
					b = b * i;

				}
				cout << b;

				Sleep(2000);
				system("cls");

				cout << "Хотите еще раз узнать число? (Y\N)"; cin >> Answer;
			} while (Answer == 'Y' || Answer == 'y');
			break;
		}

		case 1:
		{
			cout << "---Программа для возведения числа в степень---" << endl;
			int a = 0, b = 0, c = 0;
			char Answer = 'Y';

			do
			{
				a = 0, b = 0, c = 0;
				cout << endl;
				cout << "Введите число которое нужно возвести в степень" << endl;
				cin >> a;
				cout << "Введите число в какую степень возвести число" << endl;
				cin >> b;

				c = a;
				for (int i = 1; i < b; i++)
				{
					c = c * a;
				}

				cout << c;
				cout << endl;



				cout << "Хотите еще раз узнать число? (Y\N)"; cin >> Answer;
			} while (Answer == 'Y' || Answer == 'y');
			break;

		}

		case 2:
		{char Answer = 'Y';
		do {

			cout << "---Программа для выведения таблицы ASCII код---" << endl;
			for (int i = 1; i <= 255; i++)
			{
				cout << "|" << (char)i << "|";
				if (i % 16 == 0)
				{
					cout << endl;
				}
			}


			cout << "\nХотите еще раз узнать число? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');
		break;
		}
		case 3:
		{	char Answer = 'Y';
		do {

			cout << "---Ряд Фибоначчи---" << endl;
			int a = 0; int b = 0; int c = 1; int pred = 0;
			do
			{
				cout << "Введите число до какого предела считать " << endl;
				cin >> pred;
				if (pred < 0)
				{
					cout << "Число меньше 0 Введите еще раз" << endl;
				}
			} while (pred < 0);

			do {


				a = b;
				b = c;
				c = a + b;
				if (a > pred)
				{
					break;
				}


				cout << a << " ";

			} while (true);
			cout << "Хотите еще раз узнать число? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');
		break;

		}


		case 4:
		{char Answer = 'Y';
		do {
			cout << "---Ряд Фибоначчи с заданным числом---" << endl;
			int a = 0; int b = 0; int c = 1; int pred = 0;
			do
			{
				cout << "Введите число сколько вывести цифр "; cin >> pred;
				if (pred < 0)
				{
					cout << "Число меньше 0 Введите еще раз" << endl;
				}
			} while (pred < 0);

			for (int i = 0; i < pred; i++)
			{
				a = b;
				b = c;
				c = a + b;
				cout << a << " ";
			}
			cout << "Хотите еще раз узнать число? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');
		break;
		}

		case 5:
		{char Answer = 'Y';
		do {
			cout << "---Ряд простых чисел c пределом---" << endl;
			int a = 0, b = 0, c = 0;

			do
			{
				cout << "Введите предел чисел" << endl; cin >> a;
				if (a < 0)
				{
					cout << "Число меньше 0 Введите еще раз" << endl;
				}
			} while (a < 0);

			for (int i = 2; i < a; i++)
			{
				for (int j = 1; j < a; j++)
				{
					if (i % j == 0)
					{
						c++;
					}
				}
				if (c < 3)
				{
					b = i;
					cout << b << " ";
				}
				c = 0;
			}
			cout << "Хотите еще раз узнать число? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');
		break;

		}

		case 6:
		{char Answer = 'Y';
		do {
			cout << "---|Программа для управления Роботом|---";
			int comand = 0; // команда, вводимая с клавиатуры
			enum comande { go = 11, right = 10, left = 01, stop = 00 };
			int direction = 0;
			enum direction { N = 1, NE = 2, E = 3, SE = 4, S = 5, SW = 6, W = 7, NW = 8 };
			/*int direction = 0; enum direction{N=1,NE=12,E=2,SE=32,S=3,SW=34,W=4,NW=14};*/
			do //цикл начального положения Робота
			{
				cout << R"(Введите первоначальное положенние робота:
1) N(N) - Север
2) NE(ne) - Северо Восток
3) E(e) - Восток
4) SE(se) - Юга Восток
5) S(s) - ЮГ
6) SW(sw) - Юга Запад
7) W(w) - Запад
8) NW(nw) - Севера Запад)" << endl;
				cin >> direction;
				system("cls");
				if (direction == 1 || direction == 3 || direction == 5
					|| direction == 7 || direction == 2 || direction == 4 || direction == 6
					|| direction == 8) break;
				else cout << "Введенно неверное направление Повторите ввод" << endl;
			} while (true); // БЕСКОЕЧНЫЙ ЦИКЛ
			do
			{
				system("cls"); // очистка экрана
				cout << R"(
Робот готов и ожидает команду:
11- Двигаться вперед
10- Повернуть направо
01- Повернуть налево
00-остановиться
)";
				cin >> comand;
				switch (direction) // выбор тек направления
				{
					//если текущее направление север
				case 1:
					//case 'n':
					switch (comand) //выбор команды робота
					{
					case comande::go:  //case Go: //case 11:
						cout << "Робот поедет вперед - на север!" << endl;
						break;
					case comande::right:
						cout << "Робот повернет на северо восток!" << endl;
						direction = 2; //смена направления робота
						break;
					case comande::left:
						cout << "Робот повернет на северо запад!" << endl;
						direction = 8; //смена направления робота
						break;
					case comande::stop:
						cout << "Робот остановился и смотрит на север!" << endl;
						break;
					default:
						cout << "Некорректная комманда!" << endl;
						break;
					}
					break;
					//Если текущее направление северо восток
				case 2:
					//case'ne':
					switch (comand)
					{
					case comande::go:
						cout << "Робот поедет вперед - на Северо Восток" << endl;
						break;
					case comande::right:
						cout << "Робот повернет на восток" << endl;
						direction = 3;// смена направления робота
						break;
					case comande::left:
						cout << "Робот повернет на север" << endl;
						direction = 1;// Смена положения робота
						break;
					case comande::stop:
						cout << "Робот остановиться и смотримт на северо восток" << endl;
						break;
					default:
						cout << "Некоректная команда!" << endl;
						break;
					}
					break;
					//если текущее направление юг
				case 5:
					//case 's':
					switch (comand) //выбор команды робота
					{
					case comande::go:  //case Go: //case 11:
						cout << "Робот поедет вперед - на юг!" << endl;
						break;
					case comande::right:
						cout << "Робот повернет на юга запад!" << endl;
						direction = 6; //смена направления робота
						break;
					case comande::left:
						cout << "Робот повернет на юга восток!" << endl;
						direction = 4; //смена направления робота
						break;
					case comande::stop:
						cout << "Робот остановился и смотрит на юг!" << endl;
						break;
					default:
						cout << "Некорректная комманда!" << endl;
						break;
					}
					break;
					//Если текущее направление юга запад
				case 6:
					//case'sw':
					switch (comand)
					{
					case comande::go:
						cout << "Робот поедет вперед на юга запад" << endl;
						break;
					case comande::right:
						cout << "Робот повернет на запад" << endl;
						direction = 7;//смена направления
						break;
					case comande::left:
						cout << "Робот повернет на Юг" << endl;
						direction = 5;
						break;
					case comande::stop:
						cout << "Некоректная команда" << endl;
						break;
					}
					break;
					//если текущее направление запад
				case 7:
					//case 'w':
					switch (comand) //выбор команды робота
					{
					case comande::go:  //case Go: //case 11:
						cout << "Робот поедет вперед - на запад!" << endl;
						break;
					case comande::right:
						cout << "Робот повернет на северо запад!" << endl;
						direction = 8; //смена направления робота
						break;
					case comande::left:
						cout << "Робот повернет на юга запад!" << endl;
						direction = 6; //смена направления робота
						break;
					case comande::stop:
						cout << "Робот остановился и смотрит на запад!" << endl;
						break;
					default:
						cout << "Некорректная комманда!" << endl;
						break;
					}
					break;
					//Если текущие направление северо запад
				case 8:
					//case'nw':
					switch (comand)
					{
					case comande::go:
						cout << "Робот поедет вперед на северо запад" << endl;
						break;
					case comande::right:
						cout << "Робот повернет на север" << endl;
						direction = 5;
						break;
					case comande::left:
						cout << "Робот повернет на запад" << endl;
						direction = 7;
						break;
					case comande::stop:
						cout << "Робот остановиться и смотрит на сверо запад" << endl;
						break;
					default:
						cout << "Некоректаня команда" << endl;
						break;
					}
					break;
					//если текущее направление юга восток
				case 4:
					//case'se':
					switch (comand) //Выборы команды робота
					{
					case comande::go:
						cout << "Робот поедет вперед на юго вотсок" << endl;
						break;
					case comande::right:
						cout << "Робот повернет на Юг" << endl;
						direction = 5;//смена направления работа
						break;
					case comande::left:
						cout << "Робот повернет на восток" << endl;
						direction = 3;
						break;
					case comande::stop:
						cout << "Робот остановился и смотрит на юга восток" << endl;
						break;
					default:
						cout << "Некоректная команда" << endl;
						break;
					}
					break;
					//если текущее направление восток					
				case 3:
				case 'e':
					switch (comand) //выбор команды робота
					{
					case comande::go:  //case Go: //case 11:
						cout << "Робот поедет вперед - на восток!" << endl;
						break;
					case comande::right:
						cout << "Робот повернет на юга восток!" << endl;
						direction = 4; //смена направления робота
						break;
					case comande::left:
						cout << "Робот повернет на северо восток!" << endl;
						direction = 2; //смена направления робота
						break;
					case comande::stop:
						cout << "Робот остановился и смотрит на восток!" << endl;
						break;
					default:
						cout << "Некорректная комманда!" << endl;
						break;
					}
					break;
				}
				if (comand == comande::stop)
				{
					cout << "Для продолжение работы робота введите 11, для выключение робота введите 00:";
					cin >> comand;
				}
				Sleep(1500);
			} while (comand != comande::stop);// (comand=stop)
			cout << "Выключение робота" << endl;
			Sleep(1500); //добовление задержки в 1500 миллисекунд (1.5) сек


			cout << "Хотите еще раз узнать число? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');
		break;
		}
		case 7:
		{
			break;
		}

		}

	} while (poz != 7);

}
int menu()
{
	char menu[8][50] = { "Факториал","Возвеедение в сепень","код ASCII","Ряд фибоначи до предела","Ряд фибоначи","Простые числа","Робот","Выход" };//Пункты меню
	int poz = 0, key;//поз-пункта меню, кей-кнопка нажатия

	for (int i = 0; i < 8; i++)//Рисовка меню
	{
		SetCursor(15, 10 + i);
		cout << menu[i];

	}
	do {
		for (int i = 0; i < 8; i++)//изменения цвета выбронного пункта
		{
			SetCursor(15, 10 + i);

			if (i == poz)
			{
				SetColor(Yellow, Black);
			}
			else
			{
				SetColor(White, Black);
			}

			cout << menu[i];

		}

		key = _getch();
		switch (key)
		{
		case Up:
		{	poz--;
		if (poz < 0)
		{
			poz = 7;
		}
		break;
		}
		case Down:
		{
			poz++;
			if (poz > 7)
			{
				poz = 0;
			}
			break;
		}
		case Enter:
		{
			SetColor(White, Black);
			return(poz);//возвращение выбронного пункта меню
		}


		}

	} while (true);







}
