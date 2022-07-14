#include <iostream>
using namespace std;
int main()
{
	short a = 10000;
	short b = 25000;
	cout << '\t' << a << "\t" << b << endl;
	a = b + a;
	b = a - b;
	a = a - b;
	cout << "\t" << a << "\t" << b << endl;
}
