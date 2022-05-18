#include "complex.h"
double Complex::module() {
	return sqrt(im * im + re * re);
}