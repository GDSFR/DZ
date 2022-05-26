#include <iostream>
#include <string>
#include "Classes.h"
#include <ctime>
using namespace std;
int main()
{
	Property a;
	srand(time(0));
	int l = 7;
	setlocale(LC_ALL, "rus");
	int j = rand() * 20;
	Property* b1 = new Apartment(j);
	Property* b2 = new Apartment(j * 2); 
	Property* b3 = new Apartment(j * 3);							//почему нельзя умножать на 4 и более?
	j = rand() * 17;
	Property* b4 = new Car(j);
	Property* b5 = new Car(j * 2);
	j = rand() * 25;
	Property* b6 = new CountryHouse(j);
	Property* b7 = new CountryHouse(j * 2);
	//array with *Property
	Property *ar[7] = { b1,b2,b3,b4,b5,b6,b7};
	for (int i = 0; i < 7; i++) {
		cout << "цена " << ar[i]->getWorth() << " налог ";
		ar[i]->taxes();
		cout << endl;
		delete ar[i];
	}
	
	return 0;
}

