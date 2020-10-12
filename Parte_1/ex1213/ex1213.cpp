#include <iostream>

using namespace std;

int main(){
	cout << boolalpha;
	cout << "tre è maggiore di uno = " << (3 > 1) << endl;
	cout << "quattro diviso due è minore di zero = " << ((4/2) < 0) << endl;
	cout << "il carattere zero è uguale al valore zero = " << ('0' == 0) << endl;
	cout << "dieci mezzi è compreso fra zero escluso e dieci incluso = " << ((0 < (10/2)) and ((10.5) <= 10)) << endl;
	cout << "non è vero che tre è magiore di due e minore di uno = " << (not(3 > 2 and 3 < 1)) << endl;
	cout << "tre minore di meno cinque implica sette maggiore di zero = " << (not(3 < 5) or (7 > 0)) << endl;
}
