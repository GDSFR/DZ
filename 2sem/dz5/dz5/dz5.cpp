#include"funch.h"
#include <iostream>
using namespace std;
int main()
{ 
	setlocale(LC_ALL, "rus");
	string b = "+";
	 while(b=="+") {
		cout << "Введите размер массива ";
		int n = 0;
		cin >> n;
		con(n);
		cout << "продолжить работу с массивами(+)?" << endl;
		cin >> b;
	
	}
	return 0;
}

