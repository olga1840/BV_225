#include<Windows.h>
#include<iostream>
#include<string>
#include <math.h>
using namespace std;

double power(double, int);
int fibonachi(int);
bool easy_num(int);

//#define FACTORIAL
//#define POWER
//define ASCII_16
//#define FIB_1
#define FIB_2
//#define EASY_NUMS

void main() {
#ifdef FACTORIAL
	int n, res = 1;
	cout << "Enter number: "; cin >> n;
	while (n > 32 or n < 0) {
		cout << "Programm would not work with number bigger than 32 and with numbers smaller than 0" << endl;
		cout << "Entre new number: "; cin >> n;
	}
	if (n == 0)
		cout << "Result = " << 1;
	else {
		for (int i = 1; i < n + 1; i++)
			res *= i;
		cout << "Result = " << res;
	}
#endif //FACTORIAL

#ifdef POWER
	double x; int exp;
	cout << "Enter number: "; cin >> x; cout << "Enter exponent: "; cin >> exp;
	cout << power(x, exp);
#endif //POWER

#ifdef ASCII_16
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++) {
		cout << char(i) << " ";
		if (i % 16 == 0)
			cout << endl;
	}
#endif //ASCII_16

#ifdef FIB_1
	int n;
	cout << "Enter number: "; cin >> n;
	for (int i = 0; i >= 0; i++) {
		int res = fibonachi(i);
		if (res <= n)
			cout << res << "\t";
		else
			break;
	}
#endif //FIB_1

#ifdef FIB_2
	int n;
	cout << "Enter number: "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << fibonachi(i) << " ";
	}
#endif //FIB_2

#ifdef EASY_NUMS
	int n;
	cout << "Enter number: "; cin >> n;
	for (int i = 1; i <= n; i++) {
		if (easy_num(i) == true)
			cout << i << "\t";
	}
#endif //EASY_NUMS
}


double power(double a, int n) {
	if (n == 0)
		return 1;
	else if (n < 0)
		return 1 / (a * (power(a, -n - 1)));
	else
		return a * power(a, n - 1);
}


int fibonachi(int n)
{
	if (n <= 1)
		return n;
	else
		return fibonachi(n - 1) + fibonachi(n - 2);
}

bool easy_num(int n) {
	int num = int(pow(n, 0.5)) + 1;
	bool f = true;
	for (int i = 2; i < num; i++) {
		if (n % i == 0) {
			f = false;
			break;
		}
	}
	return f;
}
