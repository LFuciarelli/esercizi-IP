#ifndef _HEADER
#define _HEADER

#include <string>

struct Persona{
	std::string nome;
	std::string cognome;
	unsigned int anno_nascita;
	Persona* next;
};

struct queue{
	Persona* head;
	Persona* tail;
};

void create_queue(queue&);
void enqueue(queue&, Persona);
void dequeue(queue&);
unsigned int eta(Persona&);
void sort_queue(queue&);
void print(queue&);

#endif
