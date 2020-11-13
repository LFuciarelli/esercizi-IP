#include <iostream>

using namespace std;

double sq(double);

int main(){
	double cateto1 = 3;
	double cateto2 = 4;
	double ipotenusa = sqrt(sq(cateto1) + sq(cateto2));
	cout << "Il triangolo che ha cateti lunghi " << cateto1 << " e " << cateto2;
	cout << " ha ipotenusa lunga " << ipotenusa << "\n";
}

double sq(double n){
	return n*n;
}
