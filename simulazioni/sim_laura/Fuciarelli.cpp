#include "header.h"
#include <string>
#include <iostream>

const std::string ERROR = "Empty queue";
void create_queue(queue& q){
	q.head = nullptr;
	q.tail = nullptr;
}

// inserimento in coda
void enqueue(queue& q, Persona p){
	Persona* aux = new Persona;
	aux->nome = p.nome;
	aux->cognome = p.cognome;
	aux->anno_nascita = p.anno_nascita;
	if(q.head == nullptr){
		q.head = aux;
		q.tail = aux;
	} else {
		q.tail->next = aux;
		q.tail = aux;
	}
}

// eliminazione in testa
void dequeue(queue& q){
	if(q.head == nullptr)
		throw ERROR;	
	Persona* temp = q.head;
	q.head = q.head->next;
	delete temp;
	if(q.head == nullptr)
		q.tail = nullptr;
}

unsigned int eta(Persona& p){
	if(p.anno_nascita > 2021){
		string ERROR2 = "Età invalida";
		throw ERROR2;
	}
	return 2021 - p.anno_nascita;
}

void sort_queue(queue& q){
	if(q.head == nullptr)
		throw ERROR;

	Persona* curr = q.head;
	while(curr != nullptr){
		Persona* min = curr;
		Persona* aux = curr->next;
		while(aux != nullptr){
			if (eta(*aux) < eta(*min))
				min = aux;
			aux = aux->next;		
		}
		
		// Swap
		std::string tn = (*min).nome;				//min->nome
		std::string tc = (*min).cognome;
		unsigned int tan = (*min).anno_nascita;

		(*min).nome = (*curr).nome;
		(*min).cognome = (*curr).cognome;
		(*min).anno_nascita = (*curr).anno_nascita;

		(*curr).nome = tn;
		(*curr).cognome = tc;
		(*curr).anno_nascita = tan;

		curr = curr->next;
	}	
}

void print(queue& q){
	if(q.head == nullptr)
		throw ERROR;
	queue aux = q;
	while(aux.head != nullptr){
		std::cout << aux.head->nome << " " << aux.head->cognome << " " << aux.head->anno_nascita << std::endl;
		aux.head = aux.head->next;
	}
}
