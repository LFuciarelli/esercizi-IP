#ifndef _HEADER
#define _HEADER

#include <vector>
#include <string>

struct coppia{
	int x;
	int y;
};

typedef std::vector<coppia> insieme;

void create_coppia(insieme&);
void read_file(insieme&, std::string);
void print_coppia(coppia& c);
void print_insieme(insieme&);
int cardinalita(insieme&);
void minimali_massimali(insieme&, insieme&, insieme&, std::string);
void minimo_massimo(insieme&, insieme&, coppia&, coppia&);
bool is_in(insieme& i, coppia& c);
void minoranti_maggioranti(insieme&, insieme&, insieme&, insieme&, insieme&, std::string);
void inferiore_superiore(insieme&, insieme&, coppia&, coppia&, std::string);
void sort(insieme&);

#endif
