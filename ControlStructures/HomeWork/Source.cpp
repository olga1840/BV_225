#include<iostream>
#include<string>
using namespace std;


void main() {
	setlocale(LC_ALL, "");
	int num = 0;
	cout << ""; std::cin >> num;
	string flag = "□";
	for (short i = 0; i < 5; i++) {
		for (short j = 0; j < 5; j++) {
			cout << flag;
			if (flag == "□")
				flag = "■";
			else flag = "□";
		}
		cout << endl;
		if (i % 2 == 0) {
			flag = "■";
		}
		else flag = "□";
	}
}