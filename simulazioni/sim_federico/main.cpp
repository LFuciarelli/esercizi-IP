#include "header.h"

#include <iostream>

using namespace std;

int main()
try {
	concessionaria con1;
	create_concessionaria(con1);
	read_auto(con1);

	aut my_car;
	my_car.casa = "BMW";
	my_car.modello = "SUV";	
	my_car.immatricolazione = 11012021;
	push(con1, my_car);
	print(con1);
	
	concessionaria con2;
	create_concessionaria(con2);
	read_auto(con2);
	print(con2);

	transfer_n(con1, con2, 2);
	cout << endl;
	print(con1);
	cout << endl;
	print(con2);
} catch (string s){
	cerr << s;
}
