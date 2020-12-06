#include "string_ord_list.h"
#include <iostream>

using namespace std;

int main(){
	list l1 = nullptr;
	list l2 = nullptr;
	read(l1);
	read(l2);
	
	cout << "Prima lista ordinata: ";	
	print(l1);
	cout << endl;

	cout << "Seconda lista ordinata: ";
	print(l2);	
	cout << endl;

	cout << boolalpha << "Le liste sono uguali?" << are_equal(l1, l2) << endl;
	
	cout << "Concatenazione: ";
	list l3 = concat(l1, l2);
	print(l3);
	cout << endl;
	
	cout << "Unione: ";
	l3 = unione(l1, l2);
	print(l3);
	cout << endl;

	cout << "Intersezione: ";
	l3 = intersect(l1, l2);
	print(l3);
	cout << endl;
}
