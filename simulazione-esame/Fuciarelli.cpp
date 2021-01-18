#include "contact.h"

void tail_insert(ContactList &c, Gprmc& g){
	cell* aux = new cell;
	aux->info = g;
	aux->next = nullptr;

	if(c == nullptr){
		c = aux;
		return;
	}

	cell* curr = c;
	while(curr->next != nullptr){
		curr = curr->next;
	}
	curr->next = aux;
}

void leggiGps(std::string nomefile, ContactList & t)
{
	std::ifstream handler;
	handler.open(nomefile);
	if(!handler.good()) throw std::string("File not good");

	Gprmc dati;
	t = nullptr;
	while(readGpsRecord(handler, dati)){
		tail_insert(t, dati);
	}
	handler.close();
}

void scriviGps(ContactList & t)
{
	cell* aux = t;
	while(aux != nullptr){
		writeGpsRecord(aux->info);
		aux = aux->next;
	}
}

void convDateTime(Gprmc & r)
{
	int date = r.date;
	r.aaaa = date % 100 + 2000;
	date /= 100;
	r.mm = date % 100;
	date /= 100;
	r.gg = date;
	
	
	int time = r.time;
	r.s = time % 100;
	time /= 100;
	r.m = time % 100;
	time /= 100;
	r.h = time;
}

float compare(Gprmc r1, Gprmc r2)
{
  return (r1.lat - r2.lat)*(r1.lat - r2.lat) + (r1.lon - r2.lon)*(r1.lon - r2.lon);
}

void sort(ContactList & c)
{
	if(c == nullptr)
		throw std::string("Empty list");

	cell* curr = c->next;
	while(curr != nullptr){
		cell* min = curr;
		cell* aux = curr->next;
		while(aux != nullptr){
			if(compare(aux->info, c->info) < compare(min->info, c->info)){
				min = aux;
			}
			aux = aux->next;
		}

		// Swap
		if(min != curr){
			Gprmc temp = curr->info;
			curr->info = min->info;
			min->info = temp;
		}

		curr = curr->next;
	}
}


void baricentro(ContactList c, float &latB, float & lonB)
{	
	if(c == nullptr)
		throw std::string("Empty list");

	int cont = 0;
	cell* aux = c;
	while(aux != nullptr){
		latB += aux->info.lat;
		lonB += aux->info.lon;
		aux = aux->next;
		cont++;
	}
	latB /= cont;
	lonB /= cont;
}

