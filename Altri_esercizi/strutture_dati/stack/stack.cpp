// LIFO - last in (is the) first out

#include <iostream>
#include <string>

#include "stack.h"

bool isEmpty(const stack& s){
	return (s == nullptr);
}

void create_empty(stack& s){
	s = nullptr;
}

void push(stack& s, Elem e){		 	// inserimento in testa
	cell* new_cell = new cell;			// cell* e stack significano la stessa cosa (typedef sul header)
	new_cell->head = e;
	new_cell->next = s;
	s = new_cell;
}

void pop(stack& s){						// cancellamento in testa
	if(isEmpty(s))
		throw "Error: empty list";
	cell* tmp = s;
	s = s->next;
	delete tmp;							// se fosse nel main, avrei dovuto scrivere anche temp = nullptr
}

Elem top(const stack& s){
	if(isEmpty(s))
		throw "Error: empty list";
	return (s->head);
}
