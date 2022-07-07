//DataTypes
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << true << endl;	//endl - end line (переносит курсор в начало новой строки)
	//cout << false << endl;
	//0 - это false, а true - это все что НЕ 0
	cout << sizeof(short int) << endl;
	//МАКРООПРЕДЕЛЕНИЙ в Visual Studio
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << 0 << " ... " << UINT_MAX << endl;
}