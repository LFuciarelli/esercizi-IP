#include <iostream>
#include "liste.h"

using namespace std;

void insert_elem_aux(cell *aux, lista& current, lista& prev){
	// sono arrivato nel punto giusto della visita; posso fare l'inserimento (questa è la base)
	if(current==nullptr || current->head > aux->head){
		aux->next = current;
		prev->next = aux;
		return;
	}
	return insert_elem(aux, current->next, prev->next);

}

void insert_elem(Elem x, lista &l){
	cell *aux;
	aux = new cell;
	aux->head=x;
	aux->next=nullptr;
	
	if (l==nullptr || l->head>x){			// inserisco in tests
		aux->next = l;
		l = aux;
		return;
	}
	else insert_elem_aux(aux, ...) // puntatori prev e current
}
