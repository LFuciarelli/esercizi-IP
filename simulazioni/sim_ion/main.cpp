#include "header.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	Libreria libro;
	libro.titolo = "Scienza al luna park";
	libro.produttore = "Editoriale Scienza";
	libro.scrittori = "Chris Oxlade";
	libro.pagine = 32;
	libro.colore = "Azzurro";
	libro.pubblicazione.giorno = 8;
	libro.pubblicazione.mese = 1;
	libro.pubblicazione.anno = 2021;
	
	Libreria libro2;
	libro2.titolo = "Letters to a Young Mathematician";
	libro2.produttore = "Basic Books";
	libro2.scrittori = "Ian Stewart";
	libro2.pagine = 203;
	libro2.colore = "Giallo";
	libro2.pubblicazione.giorno = 9;
	libro2.pubblicazione.mese = 1;
	libro2.pubblicazione.anno = 2020;
	
	Libreria libro3;
	libro3.titolo = "Alan Turing: The Enigma";
	libro3.produttore = "Penguin Books";
	libro3.scrittori = "Andrew Hodges";
	libro3.pagine = 587;
	libro3.colore = "Nero";
	libro3.pubblicazione.giorno = 17;
	libro3.pubblicazione.mese = 8;
	libro3.pubblicazione.anno = 1983;
	
	lista l;
	l = nullptr;
	InsertNewBook(l, libro);
	InsertNewBook(l, libro2);
	InsertNewBook(l, libro3);
	printLibrary(l);
		
	sortLibrary(l);		
	printLibrary(l);
		
	// Situazione dove la prima è vera e la seconda è falsa
	cout << boolalpha << findBook(l, "Azzurro", 0) << endl;		// Usare "" e 0 nel caso in cui non ci sia una string/intero come parametro
	cout << boolalpha << findBook(l, "Basic", 0) << endl;
	
	cout << howMany(l) << endl;
	cout << findBiggest(l) << endl;
	cout << findSmallest(l) << endl;
	pickBook(l, libro3);
	printLibrary(l);
	cout << howMany(l) << endl;
}
