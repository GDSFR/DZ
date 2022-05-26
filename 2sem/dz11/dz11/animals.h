#ifndef ANIMALS_H
#define ANIMALS_H
#include <string>
using namespace std;

 class Animal {
 protected:
	string name;
public:
	Animal() : name(""){

		cout << "animal is created";
	}
	Animal(string name) : name(name) {
		cout << name << endl;
		
	}
	virtual ~Animal() {
	}
	virtual void printname() = 0;
};

class Cat: public Animal {
private:
	bool ishungry = 1;
	
public:
	Cat():Animal() {
		
	}
	Cat(string l) :Animal(l) {

	}
	virtual void printname() {
		cout << "cat " << this->name;
		if (ishungry) {
			cout << " is hungry" << endl;
		}
		else {
			cout << " isn't hungry" << endl;
		}
	}

	~Cat() {

	}
};

class Dog: public Animal {
private:
	bool ishungry = 0;

public:
	Dog() :Animal() {

	}
	Dog(string l) :Animal(l) {

	}
	virtual void printname() {
		cout << "dog " << this->name;
		if (ishungry) {
			cout << " is hungry" << endl;
		}
		else {
			cout << " isn't hungry" << endl;
		}
	}
	
	~Dog() {

	}

};

class Parrot: public Animal {
private:
	bool isFlying = 0;
public:
	Parrot() :Animal() {

	}
	Parrot(string l) :Animal(l) {

	}
	virtual void printname() {
		cout << "parrot " << this->name;
		if (isFlying) {
			cout << " is flying" << endl;
		}
		else {
			cout << " isn't flying" << endl;
		}
	}
	void fly() {
		isFlying = 1;
	}
	void stopFlying() {
		isFlying = 0;
	}
};
#endif