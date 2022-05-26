#ifndef CLASSES_H
#define CLASSES_h
#include <iostream>
#include <string>

class Property {
protected:
	double worth;
public:
	Property() : worth(0) {
	}
	Property(int a) : worth(a) {
		
	}
	double getWorth() {
		return worth;
	}
	virtual void taxes() = 0;
};
class Apartment:public Property
{
public:
	void taxes() {
		double a = this->worth / 1000;
		std::cout << a;
	}
	Apartment(int a):Property(a){
	}
};
class Car:public Property {
public:
	void taxes() {
		std::cout << this->worth / 200 ;
	}
	Car(int a) : Property(a){

	}
};
class CountryHouse:public Property {
public:
	void taxes() {
		std::cout << this->worth / 500 ;
		
	}
	CountryHouse(int a) : Property(a)
	{
	}
};
#endif