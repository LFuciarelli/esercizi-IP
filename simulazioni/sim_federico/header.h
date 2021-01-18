#ifndef _HEADER
#define _HEADER

#include <string>

struct aut{
	std::string casa;
	std::string modello;
	unsigned int immatricolazione;
};

struct cell{
	aut info;
	cell* next;
};

typedef cell* concessionaria;

void create_concessionaria(concessionaria&);
void push(concessionaria&, aut&);
void pop(concessionaria&);
bool is_in(concessionaria&, aut&);
void read_auto(concessionaria&);
void print(concessionaria&);
bool meno_recente(aut, aut);
void sort(concessionaria&);
int invenduto(concessionaria&);
void cancel(concessionaria&, aut&);
void transfer(concessionaria&, concessionaria&, aut&);
void transfer_n(concessionaria&, concessionaria&, int);

#endif
