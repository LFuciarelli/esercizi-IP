#include <iostream>

using namespace std;

typedef int Elem; 						// tipo base della lista (sinonimo di int, però posso facilmente cambiarlo a float, per esempio)

struct cell {
	Elem info; 							// contenuto della cella
	cell* next; 							// puntatore alla cella successiva
};

typedef cell* list; 					// diamo un nome più evocativo alla nostra lista semplice

// effettua inserimento in testa di un elemento in una lista
void head_inset(Elem x, list &l){		// l punta al primo elemento della lista
	cell *aux = new cell;				// cell* invece di list perché è un puntatore a un'unica cella, non è una vera lista
	aux->info = x;
	aux->next = l;						// Il primo elemento diventa il secondo
	l = aux;							// l riceve la nuova cella aux, che quindi sarà il primo elemento della lista
}

// cancella elemento in testa alla lista
// l -> [X| ] -> [Y/nullptr]
void head_delete(list &l){				// l punta al primo elemento della lista
	cell* aux = l->next;				// prima di cancellare il primo elemento, devo salvare il secondo
	delete l; 							// libera lo spazio di memoria heap puntato da l [il primo elemento della lista]
	l = aux;							// Adesso l punta al secondo elemento
}

int main(){
	list L1=nullptr;
	Head_insert(3, L1);
	// L1 -> [3/nullptr]
}
