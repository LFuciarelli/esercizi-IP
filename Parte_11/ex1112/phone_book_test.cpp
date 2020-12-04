#include "phone_book.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	PhoneBook PB;
	input(PB);
	sortSurnames(PB);
	print(PB);

	string cognome;
	cout << "Cerca un cognome:";
	cin >> cognome;
	cout << "Posizione del contatto o del contatto precedente: " << FindPos(PB, cognome)+1 << endl;
	
	cout << "Inserisci un nuovo contatto: (cognome/nome/numero)";
	string s, n;
	int t;
	cin >> s >> n >> t;
	add_ord(PB, s, n, t);
	print(PB);
}
