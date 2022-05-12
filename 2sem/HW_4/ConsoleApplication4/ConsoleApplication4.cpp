#include <iostream>
#include <math.h>
using namespace std;
double zf(double a, double b){
	if (a < b){
		return sqrt(abs(a*a-b*b));
	}
	else{
		return 1 - 2 * cos(a) * sin(b);
	}
}
double tf(double a, double b, double z){
	if (z < b){
		return pow((z+a*b*a),(1.0/3));
	}
	else if (z > b){
		if (cos(z * a) == 0){
			cout << "Error";
			return false;
		}
		else{
			return (1 / (cos(z * a)));
		}
	}
	else{
		if (z < 0){
			cout << "Error";
			return false;
		}
		else{
			return 1 - log(z) + cos(a * b * a);
		}
	}
}
int main(){
	double a, b, z, t,x;
	a = 10;
	b = -8;
	z=zf(a,b);
	t=tf(a, b, z);
	cout<<z<<endl<<t;
}
