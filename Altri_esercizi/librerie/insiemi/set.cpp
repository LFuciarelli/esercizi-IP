#include "set.h"
#include <iostream>

struct cell{
	Base_Type head;
	cell *next;
};

void create_empty_set(Set &s){
	s = nullptr;
}

// scegliamo un'implementazione basata su
// inserimento ordinato, solo per rendere
// più efficiente l'operazione

// per gli insiemi il mantenimento degli elementi
// in ordine non sarebbe necessario
 
void insert_in_set(Base_Type x, Set &s){	// Base_Type è un alias per int
	// creo una nuova cella
	cell *aux = new cell;
	aux->head = x;
	
	Set cur = s;
	Set prev = nullptr;
	while((cur != nullptr) && (cur->head<x)){	// dobbiamo uscire se cur è uguale a nullptr o se head >= x
		prev = cur;
		cur = cur->next;
	}
	
	if((cur!=nullptr) && (cur->head == x))		// per evitare ripetizioni nel caos in cui cur == aux
		return;
	
	aux->next = cur;							// nel caso in cui cur è maggiore di aux
	if (cur == s)								// inserimento in testa
		s = aux;								// perché aux contiene già cur come elemento succesivo
	else
		prev->next = aux;
	
}

void empty_set(Set &s){
	Set temp = s;
	while (s != nullptr){
		s = s->next;
		delete temp;						// eliminiamo la cella anteriore
		temp = s;
	}
}

bool is_in_set(Base_Type x, const Set &s){
	Set temp = s;
	while(temp != nullptr){
		if (temp->head == x) return true;
		temp = temp->next;
	}
	return false;
}

void print_set(const Set &s){
	Set sCopy = s;
	std::cout << "Set: ";
	while (sCopy != nullptr){
		std::cout << sCopy->head << " // ";
		sCopy = sCopy->next;
	}
	std::cout << std::endl;
}

// Attenzione: l'insieme risultante deve
// rispettare tutte le proprità degli insiemi
// (in particolare no ripetizioni)

Set union_set(const Set &s1, const Set &s2){
	Set s_union;
	create_empty_set(s_union);

	Set temp = s1;
	while(temp != nullptr){
		insert_in_set(temp->head, s_union);
		temp = temp->next;
	}
	
	temp = s2;
	while(temp != nullptr){
		insert_in_set(temp->head, s_union);
		temp = temp->next;
	}

	return s_union;	
}

Set inters_set(const Set &s1, const Set &s2){
	Set s_int;
	create_empty_set(s_int);

	Set temp = s1;
	while(temp != nullptr){
		if (is_in_set(temp->head, s2))
			insert_in_set(temp->head, s_int);
		temp = temp->next;
	}

	return s_int;
}
