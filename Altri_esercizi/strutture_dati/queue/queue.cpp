// FIFO - first in first out

#include <iostream>
#include <string>

#include "queue.h"

bool isEmpty(const queue& q){
	return (q.tail==nullptr);			// oppure q.head
}

void create_empty(queue& q){
	q.head = nullptr;
	q.tail = nullptr;
}


// Inserisco dalla coda

void enqueue(queue& q, Elem e){
	cell *aux = new cell;
	aux->head = e;
	aux->next = nullptr;
	
	if(isEmpty(q)){
		q.head = aux;
		q.tail = aux;
	} else {	// inserisco in fondo (es. tail: 3, voglio inserire 4, quindi 3 -> 4, e adesso tail: 4)
		q.tail->next = aux;
		q.tail = aux;
	}
}

// Toglio dalla testa

void dequeue(queue& q){
	if(isEmpty(q)){
		throw "Empty queue";
	}
	cell* temp = q.head;
	q.head = q.head->next;
	delete temp;
	if(q.head == nullptr)
		q.tail = nullptr;
}

Elem front(const queue& q){
	if(isEmpty(q)){
		throw "Empty queue";
	}
	return q.head->head;
}

Elem back(const queue& q){
	if(isEmpty(q)){
		throw "Empty queue";
	}
	return q.tail->head;
}

