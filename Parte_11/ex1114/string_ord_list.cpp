#include "string_ord_list.h"
#include <iostream>
#include <string>

const std::string ELEM_NOT_FOUND = "ELEMENT NOT FOUND";
struct cell_str{
	std::string info;
	cell* next = nullptr;
};

void insert(ordList& l, std::string s){
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

void read(list& l){
	std::string s = "";
	
	std::cout << "Inserire stringhe [inserire exit per uscire]";
	
	while(true){
		std::cin >> s;
		if (s == "exit")
			break;
		insert(l, s);	
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

bool are_equal(const list l1, const list l2){
	cell* l1_cur = l1;
	cell* l2_cur = l2;
	
	while(l1_cur != nullptr && l2_cur != nullptr){
		if (l1_cur->info != l2_cur->info)
			return false;
		l1_cur = l1_cur->next;
		l2_cur = l2_cur->next;
	}

	return (l1_cur == nullptr && l2_cur == nullptr);			// Entrambe le liste sono alla fine, quindi hanno la stessa lunghezza
}

ordList concat(const list l1, const list l2){
	ordList l3 = nullptr;
	
	cell* cur = l1;
	while(cur != nullptr){
		insert(l3, cur->info);
		cur = cur->next;
	}
	
	cur = l2;
	while(cur != nullptr){
		insert(l3, cur->info);
		cur = cur->next;
	}

	return l3;
}

ordList unione(const list l1, const list l2){
	ordList l3 = nullptr;
	
	cell* cur = l1;
	while(cur != nullptr){
		deleteAll(l3, cur->info);					// prima di inserire l'elemento, cancello ogni sua apparizione previa
		insert(l3, cur->info);
		cur = cur->next;
	}
	
	cur = l2;
	while(cur != nullptr){
		deleteAll(l3, cur->info);
		insert(l3, cur->info);
		cur = cur->next;
	}

	return l3;
}

ordList intersect(const list l1, const list l2){
		
	ordList l3 = nullptr;
	
	cell* l1_cur = l1;
	cell* l2_cur;
	while(l1_cur != nullptr){
		l2_cur = l2;
		while(l2_cur != nullptr){
			if(l1_cur->info == l2_cur->info){
				deleteAll(l3, l1_cur->info);		// oppure l2_cur->info, è equivalente
				insert(l3, l1_cur->info);
				break;
			}
			l2_cur = l2_cur->next;
		}
		l1_cur = l1_cur->next;
	}

	return l3;
}
