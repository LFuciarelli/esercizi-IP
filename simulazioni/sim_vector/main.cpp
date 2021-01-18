#include "header.h"

#include <iostream>

using namespace std;

int main(){
	insieme A;
	read_file(A, "insiemeA.txt");
	insieme B;
	read_file(B, "insiemeB.txt");
	
	cout << "Insieme A:\n";
	print_insieme(A);
	cout << "\nInsieme B:\n";
	print_insieme(B);
	cout << endl;
	
	// ordine "lex" o "prod" (lessicografico o prodotto)
	string ordine = "prod";	
	cout << "Ordine usato: " << ordine << endl;	

	insieme minimali;
	insieme massimali;
	minimali_massimali(B, minimali, massimali, ordine);
	cout << "\nMinimali di B:\n";
	print_insieme(minimali);
	cout << "\nMassimali di B:\n";
	print_insieme(massimali);

	coppia min;
	coppia max;
	minimo_massimo(minimali, massimali, min, max);
	cout << "\nMinimo di B: (se (0, 0), non esiste): ";
	print_coppia(min);
	cout << "Massimo di B (se (0, 0), non esiste): "; 
	print_coppia(max);
	
	insieme minoranti;
	insieme maggioranti;
	minoranti_maggioranti(A, minoranti, maggioranti, minimali, massimali, ordine);
	cout << "\nMinoranti di B:\n";
	print_insieme(minoranti);
	cout << "\nMaggioranti di B:\n";
	print_insieme(maggioranti);
	
	coppia inf;
	coppia sup;
	inferiore_superiore(minoranti, maggioranti, inf, sup, ordine);
	cout << "\nEstremo inferiore di B: (se (0, 0), non esiste): ";
	print_coppia(inf);
	cout << "Estremo superiore di B (se (0, 0), non esiste): "; 
	print_coppia(sup);

	cout << "\nInsieme B ordinato:\n";
	sort(B);
	print_insieme(B);
}
