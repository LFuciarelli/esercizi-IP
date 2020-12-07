#include "string_list.h"
#include <iostream>
#include <string>

const std::string ELEM_NOT_FOUND = "ELEMENT NOT FOUND";
struct cell_impl{
	std::string info;
	cell* next = nullptr;
};

void headInsert(list& l, std::string s){
	cell* new_cell = new cell;
	
	new_cell->info = s;
	new_cell->next = l;

	l = new_cell;
}

void read(list& l){
	std::string s = "";
	
	std::cout << "Inserire stringhe [inserire exit per uscire]";
	
	while(true){
		std::cin >> s;
		if (s == "exit")
			break;
		headInsert(l, s);	
	}
}

void print(const list l){
	cell* cur = l;
	while(cur != nullptr){
		std::cout << cur->info << " ";
		
		cur = cur->next;	
	}
}

std::string getElem(const list l, int index){
	cell* cur = l;
	int i = 0;

	while(cur != nullptr){
		if (i == index)
			return cur->info;
		i++;
		cur = cur->next;
	}
	throw ELEM_NOT_FOUND;
}

// cancella elemento in posizione fissata
void deleteAt(list& l, int index){
	cell* cur = l;
	cell* prev = nullptr;
	int i = 0;
	
	while(cur != nullptr && i != index){
		i++;
		prev = cur;
		cur = cur->next;
	}
	
	if (cur != nullptr){
		if(cur == l)					// voglio eliminare la prima cella
			l = l->next;
		else							// se prev è stato inizializzato, vogliamo farlo puntare a cur->next, non cur
			prev->next = cur->next;		// così eliminiamo cur
		delete cur;
	} else 
		throw ELEM_NOT_FOUND;
}

// inserimento in posizione fissata
void insertAt(list& l, std::string s, int index){
	cell* new_cell = new cell;
	new_cell->info = s;
	new_cell->next = nullptr;	
	
	cell* cur = l;
	cell* prev = nullptr;
	int i = 0;

	while(cur != nullptr && i != index){
		i++;
		prev = cur;
		cur = cur->next;
	}

	if (cur != nullptr){
		if(cur == l){
			new_cell->next = l;			// oppure cur al posto di l
			l = new_cell;
		} else {
			new_cell->next = cur;
			prev->next = new_cell;
		}
	} else
		throw ELEM_NOT_FOUND;
}

// cancella la prima occorrenza di una stringa in una lista
void deleteOnce(list& l, std::string s){
	cell* cur = l;
	cell* prev = nullptr;
	while(cur != nullptr){
		if(cur->info == s){
			if(cur == l)				// l non è vuota in questo caso perché l == cur e cur != nullptr
				l = l->next;
			else
				prev->next = cur->next;

			delete cur;
			break;
		}
	
		prev = cur;
		cur = cur->next;
	}
}

// cancella tutte le occorrenza di una stringa in una lista
void deleteAll(list& l, std::string s){
	cell* cur = l;
	cell* prev = nullptr;
	while(cur != nullptr){
		if(cur->info == s){
			if(cur == l)				// l non è vuota in questo caso perché l == cur e cur != nullptr
				l = l->next;
			else
				prev->next = cur->next;

			delete cur;
		}
	
		prev = cur;
		cur = cur->next;
	}
}

// inserisce in una lista ordinata mantendola ordinata
void insertInOrder(list&l, std::string s){
	cell* new_cell = new cell;
	new_cell->info = s;
	new_cell->next = nullptr;	

	cell* cur = l;
	cell* prev = nullptr;
	if (cur == nullptr){
		l = new_cell;
	} else {
		while(cur != nullptr){
			if (cur->info > new_cell->info){	// se cur nell'ordine alfabetico si trova dopo new_cell
				if (cur == l) {					// dobbiamo inserire new_cell prima di cur
					l = new_cell;
					l->next = cur; 			
				} else {
					prev->next = new_cell;
					new_cell->next = cur;
				}
				break;
			} else if (cur->info < new_cell->info && cur->next == nullptr){
				cur->next = new_cell;
			}
			prev = cur;
			cur = prev->next;
		}
	}
}
