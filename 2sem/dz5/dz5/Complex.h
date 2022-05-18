#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

struct Complex {
	double im = 0;
	double re = 0;

	
	double module();

};

#endif
