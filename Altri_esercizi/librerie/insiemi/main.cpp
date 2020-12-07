#include <iostream>

#include "set.h"		// implementa liste di interi

using namespace std;

int main(){
	Set S1, S2;
	create_empty_set(S1);
	create_empty_set(S2);	

	int i;
	cout << "Inserisci intero:" << endl;
	cin >> i;
	insert_in_set(i, S1);
	cout << "Inserisci intero:" << endl;
	cin >> i;
	insert_in_set(i, S1);
	cout << "S1: ";
	print_set(S1);

	cout << "Inserisci intero:" << endl;
	cin >> i;
	insert_in_set(i, S2);
	cout << "Inserisci intero:" << endl;
	cin >> i;
	insert_in_set(i, S2);
	cout << "S2: ";
	print_set(S2);
	
	Set S;
	S = union_set(S1, S2);
	cout << "Union: ";
	print_set(S);
	
	empty_set(S);
	S = inters_set(S1, S2);
	cout << "Intersect: ";
	print_set(S);	
}
