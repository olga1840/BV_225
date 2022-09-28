// NestedFORsDZ.cpp :
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
int menu2();


int main()
{
	setlocale(LC_ALL, "RUS");
	int poz = 1, poz2 = 0;
	int x = 10, y = 2;


	SetColor(Blue, Black);
	for (int i = -10 + 1; i < 10; i++)
	{

		for (int j = -10 + 1; j < 10; j++)
		{
			if (abs(j) + 1 >= 10 - abs(i))
			{
				cout << (char)(64 + (10 - abs(j))) << " ";
			}
			else
			{
				cout << "  ";
			}
			Sleep(1);
		}

		cout << endl;
	}
	SetColor(White, Black);
	Sleep(200);
	do {
		system("cls");
		poz = menu();
		system("cls");



		switch (poz)
		{
		case 0:
		{	char Answer = 'Y';
		do {
			for (int x = 8, i = 2; i <= 10; i++)
			{
				if (i == 10)
				{
					x--;
				}
				SetCursor(x, y + i);
				cout << i << "|";

			}
			int d = 1;
			int h = 7, v = 3;
			do {
				if (d != 1)
				{
					h = h + 3;
				}

				SetCursor(h + d, v);
				cout << d << "___";
				d++;
				if (d > 10)
				{
					break;
				}
			} while (true);

			for (int i = 2; i <= 10; i++)// цикл прохода по строкам
			{
				SetCursor(10, 2 + i);

				for (int j = 2; j <= 10; j++)//цикл прохода по столбцам
				{

					if (j == 10 && i < 10)
					{
						cout << " ";
					}
					cout << " ";
					if (i * j < 10)
					{
						cout << " ";
					}
					cout << i * j;

					cout << "|";



				}
				cout << endl << endl; //перевод строки превращает вывод данных в таблицу
			}
			cout << "Нажмите любую клавишу что бы вернуться в меню "; Answer = _getch();
		} while (Answer == 'Y' || Answer == 'y');
		break;
		}

		case 1:
		{char Answer = 'Y';
		int N = 0, X = 0;
		do
		{

			system("cls");
			poz2 = menu2();
			if (poz2 == 7) { break; }
			system("cls");
			cout << "Введите размер" << endl;
			cin >> X;
			system("cls");
			if (poz2 == 6) { X++; }

			switch (poz2)
			{
			case 0:
			{
				for (int i = 0; i < X; i++)//0
				{
					for (int j = 0; j < X; j++)
					{

						cout << "*";
					}
					cout << endl;
				}
				break;
			}
			case 1:
			{
				for (int i = 0; i < X; i++)//1
				{

					for (int j = 0; j < X; j++)
					{
						if (i < j)
						{
							cout << " ";
						}
						else
						{
							cout << "*";
						}
					}
					cout << endl;
				}
				break;
			}
			case 2:
			{
				for (int i = 0; i < X; i++)//2
				{

					for (int j = 0; j < X; j++)
					{
						if (i + j > X - 1)
						{
							cout << " ";
						}
						else
						{
							cout << "*";
						}
					}
					cout << endl;
				}
				break;
			}
			case 3:
			{
				for (int i = 0; i < X; i++)//3
				{

					for (int j = 0; j < X; j++)
					{
						if (i > j)
						{
							cout << " ";
						}
						else
						{
							cout << "*";
						}
					}
					cout << endl;
				}
				break;
			}
			case 4:
			{
				for (int i = 0; i < X; i++)//4
				{

					for (int j = 0; j < X; j++)
					{
						if (i + j < X - 1)
						{
							cout << " ";
						}
						else
						{
							cout << "*";
						}
					}
					cout << endl;
				}
				break;
			}
			case 5:
			{
				//				for (int i = 0; i < X; i++)//5
//	{	
//	
//	for (int j = 0; j < X; j++)
//	{
//		
//		if (i+j==(X-1)/2)
//		{
//			cout << "/";
//		}
//		if (i == j + X  / 2)
//		{
//			
//			cout << "\\";
//		}
//		if (i == j - X / 2)
//		{
//			cout << "\\";
//		}
//		if ((i + j)==(X+4))
//		{
//			cout << "/";
//		}
//		
//		else
//		{
//			cout << " ";
//		}
//	}
//	cout << endl;
//}
				for (int i = 0; i < X; i++)
				{
					for (int j = i; j < X; j++)
						cout << " ";
					cout << "/";
					for (int j = 0; j < i; j++)
						cout << "  ";
					cout << "\\";
					cout << endl;
				}
				for (int i = 0; i < X; i++)
				{
					for (int j = 0; j <= i; j++)
						cout << " ";
					cout << "\\";
					for (int j = 0; j < (X - 1 - i); j++)
						cout << "  ";
					cout << "/";
					cout << endl;
				}
				break;
			}
			case 6:
			{
				for (int i = 0; i < X; i++)//6
				{

					for (int j = 0; j < X; j++)
					{

						if (N == 0)
						{
							cout << "*";
							N++;
							continue;
						}
						if (N == 1)
						{
							cout << "-";
							N--;
							continue;
						}

					}
					if (N == 0)
					{
						N++;
					}
					else { N--; }
					cout << endl;
				}
				break;
			}


			}


			cout << "Хотите Поменять размер? (Y\N)"; cin >> Answer;
		} while (Answer == 'Y' || Answer == 'y');

		SetColor(White, Black);
		break;










		}

		case 2:
		{
			break;
		}
		}




	} while (poz != 2);
}
int menu()
{
	char menu[3][50] = { "Таблица Пифагора","Фигуры","Выход" };//Пункты меню
	int poz = 0, key;//поз-пункта меню, кей-кнопка нажатия

	for (int i = 0; i < 3; i++)//Рисовка меню
	{
		SetCursor(15, 10 + i);
		cout << menu[i];

	}
	do {
		for (int i = 0; i < 3; i++)//изменения цвета выбронного пункта
		{
			SetCursor(15, 10 + i);

			if (i == poz)
			{
				SetColor(Red, Black);
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
			poz = 2;
		}
		break;
		}
		case Down:
		{
			poz++;
			if (poz > 2)
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
int menu2()
{

	int poz2 = 0, key = 0, N = 0;


	do
	{
		//Квадрат
		if (poz2 == 0) { SetColor(Red, Black); }
		else { SetColor(White, Black); }
		for (int i = 0; i < 5; i++)//0
		{
			SetCursor(2, 5 + i);
			for (int j = 0; j < 5; j++)
			{

				cout << "*";
			}

		}

		if (poz2 == 1) { SetColor(Red, Black); }
		else { SetColor(White, Black); }
		//Ниж Треуг
		for (int i = 0; i < 5; i++)//1
		{
			SetCursor(10, 5 + i);
			for (int j = 0; j < 5; j++)
			{
				if (i < j)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}

		}

		if (poz2 == 2) { SetColor(Red, Black); }
		else { SetColor(White, Black); }
		//Верхн Треуг
		for (int i = 0; i < 5; i++)//2
		{
			SetCursor(17, 5 + i);
			for (int j = 0; j < 5; j++)
			{
				if (i + j > 5 - 1)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			cout << endl;
		}

		if (poz2 == 3) { SetColor(Red, Black); }
		else { SetColor(White, Black); }
		//Обр Верх Трегуг
		for (int i = 0; i < 5; i++)//3
		{
			SetCursor(2, 12 + i);
			for (int j = 0; j < 5; j++)
			{
				if (i > j)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			cout << endl;
		}

		if (poz2 == 4) { SetColor(Red, Black); }
		else { SetColor(White, Black); }

		//Обр Ниж Треуг
		for (int i = 0; i < 5; i++)//4
		{
			SetCursor(10, 12 + i);
			for (int j = 0; j < 5; j++)
			{
				if (i + j < 5 - 1)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			cout << endl;
		}


		if (poz2 == 5) { SetColor(Red, Black); }
		else { SetColor(White, Black); }
		//Ромб
		for (int i = 0; i < 4; i++)//5
		{
			SetCursor(17, 12 + i);

			for (int j = 0; j < 4; j++)
			{

				if (i + j == (4 - 1) / 2)
				{
					cout << "/";
				}
				if (i == j + 4 / 2)
				{

					cout << "\\";
				}
				if (i == j - 4 / 2)
				{
					cout << "\\";
				}
				if ((i + j) == (5))
				{
					cout << "/";
				}


				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}

		if (poz2 == 6) { SetColor(Red, Black); }
		else { SetColor(White, Black); }

		//Шахматная Доска
		for (int i = 0; i < 6; i++)//6
		{
			SetCursor(8, 18 + i);
			for (int j = 0; j < 6; j++)
			{

				if (N == 0)
				{
					cout << "*";
					N++;
					continue;
				}
				if (N == 1)
				{
					cout << "-";
					N--;
					continue;
				}

			}
			if (N == 0)
			{
				N++;
			}
			else { N--; }

		}

		key = _getch();
		switch (key)
		{
		case Up:
		{
			if (poz2 == 0 || poz2 == 1 || poz2 == 2)
			{
				poz2 = 6;
				break;
			}
			if (poz2 == 6)
			{
				poz2 = 4;
				break;
			}
			if (poz2 == 3)
			{
				poz2 = 0;
				break;
			}
			if (poz2 == 4)
			{
				poz2 = 1;
				break;
			}
			if (poz2 == 5)
			{
				poz2 = 2;
				break;
			}

		}

		case Down:
		{
			if (poz2 == 3 || poz2 == 4 || poz2 == 5)
			{
				poz2 = 6;
				break;
			}
			if (poz2 == 0)
			{
				poz2 = 3;
				break;
			}
			if (poz2 == 1)
			{
				poz2 = 4;
				break;
			}
			if (poz2 == 2)
			{
				poz2 = 5;
				break;
			}
			if (poz2 == 6)
			{
				poz2 = 1;
				break;
			}

		}

		case Left:
		{
			if (poz2 == 0)
			{
				poz2 = 2;
				break;
			}
			if (poz2 == 3)
			{
				poz2 = 5;
				break;
			}
			if (poz2 == 6)
			{
				poz2 = 3;
				break;
			}
			else { poz2--; break; }

		}

		case Right:
		{
			if (poz2 == 5)
			{
				poz2 = 3;
				break;
			}
			if (poz2 == 2)
			{
				poz2 = 0;
				break;
			}
			if (poz2 == 6)
			{
				poz2 = 5;
				break;
			}
			else { poz2++; break; }


		}
		case Enter:
		{
			return(poz2);


		}
		case esc:
		{
			return(7);
		}

		}


		SetColor(White, Black);


	} while (true);




}