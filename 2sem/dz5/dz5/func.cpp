#include "funch.h"
#include "complex.h"
using namespace std;
void con(int n)
{
	Complex *a = new Complex[n];
	point: cout << "Выберите следующее действие с массивом: заполнение(1), вывод(2), удаление(3) ";
	int choose;
	cin >> choose;

	if (choose == 1) {
		inp(a,n);
	}
	else {
		if (choose == 2) {
			
			outp(a, n);
		}
		else {
			if (choose == 3) {
			des(a);
			}
			else {
				cout << "Ошибка ввода";
			}
		}
	}
	if (choose != 3) {
		goto point;
	}

}

void inp(Complex b[], int n)
{
	cout << "ввод массива" << endl;
	string s; 
	for (int i = 0; i < n; i++)
	{
		cout <<i+1 <<  ") i * ";
		cin >> b[i].im >> b[i].re;
	}
}

void outp(Complex b[], int n)
{
	cout << "вывод массива" << endl;
	
	for (int i = 0; i < n; i++) {
		if (b[i].im != 0) {
			if (b[i].re > 0)
			{
				cout << b[i].im << "*i+" << b[i].re << endl;
			}
			else {
				cout << b[i].im << "*i" << b[i].re << endl;
			}
		}
		else {
			cout << b[i].re << endl;
		}
	}
}

void des(Complex b[]) {
	cout << "Удаление массива" << endl;

	delete[] b;
}