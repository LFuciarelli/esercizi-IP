#ifndef _HEADER
#define _HEADER

#include <string>

struct data{
	int giorno;
	int mese;
	int anno;
};

struct Libreria{
	std::string titolo;
	std::string produttore;
	std::string scrittori;
	int pagine;
	std::string colore;
	data pubblicazione;
};

struct cell{
	Libreria info;
	cell* next;
};

typedef cell* lista;

void InsertNewBook(lista&, Libreria&);
void printInfo(Libreria&);
void printLibrary(lista&);
bool findBook(lista&, std::string, int);
void pickBook(lista&, Libreria&);
void sortLibrary(lista&);
int howMany(lista&);
int findBiggest(lista&);
int findSmallest(lista&);

#endif
