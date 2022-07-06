//DataTypes
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << true << endl;	//endl - end line
	cout << false << endl;
	//0 - это false, а true - это все что НЕ 0
	cout << (bool)-0.0000000000001 << endl;
}