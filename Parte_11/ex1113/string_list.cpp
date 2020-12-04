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
	
	std::cout << "Inserire numeri: ";
	
	while(s != "exit"){
		std::cin >> s;
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

std::string deleteAt(list& l, int index){
	cell* cur = l;
	cell* prev;
	int i = 0;

	while(cur != nullptr && i != index){
		if (i == index)
			return cur->info;
		i++;
		prev = cur;
		cur = cur->next;
	}
	if (cur != nullptr){
		if(cur = l)						// voglio eleminare la prima cella
			l = l->next;	
		else							// se prev è stato inizializzato, vogliamo farlo puntare a cur->next, non cur
			prev->next = cur->next;		// così eliminiamo cur
	
	}	
	throw ELEM_NOT_FOUND;
}

std::string insertAt(list& l, std::string s, int index){
	cell* new_cell = new cell;
	new_cell->info = s;
	new_cell->next = nullptr;	
	
	cell* cur = l;
	cell* prev;
	int i = 0;

	while(cur != nullptr && i != index){
		if (i == index)
			return cur->info;
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
	}	
	throw ELEM_NOT_FOUND;
}

void deleteOnce(list& l, int index){
	deleteAt(l, 0);
}

void deleteAll(list& l, std::string s){
	cell* cur = l;
	cell* prev = nullptr;
	while(cur != nullptr){
		if(cur->info == s){
			if(cur == l){				// l non è vuota in questo caso perché l == cur e cur != nullptr
				l = l->next;
				delete cur;
			}
			else{
				prev->next = cur->next;
				delete cur;
			}
		}
	
	prev = cur;
	cur = cur->next;
	}
}

