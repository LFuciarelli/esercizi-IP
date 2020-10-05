#include <iostream>

using namespace std;

int main(){
	cout << "tre è maggiore di uno = ";
	cout << boolalpha << (3 > 1);
	cout << "\nquattro diviso due è minore di zero = ";
	cout << boolalpha << ((4/2) < 0);
	cout << "\nil carattere zero è uguale al valore zero = ";
	cout << boolalpha << ('0' == 0);
	cout << "\ndieci mezzi è compreso fra zero escluso e dieci incluso = ";
	cout << boolalpha << (0 < (10/2)) and ((10/2) <= 10);
	cout << "\nnon è vero che tre è magiore di due e minore di uno = ";
	cout << boolalpha << not(3 > 2 and 3 < 1);
	cout << "\ntre minore di meno cinque implica sette maggiore di zero = ";
	cout << boolalpha << (not(3 < 5) or (7 > 0)) << endl;
}
