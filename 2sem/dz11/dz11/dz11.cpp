#include <iostream>
#include <string>
#include "animals.h"
using namespace std;
int main()
{
	Animal* ptr = new Cat();
	string l = "roma";
	Parrot a(l);
	a.printname();
	delete ptr;
	return 0;
}

