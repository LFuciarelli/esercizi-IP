#include "header.h"
#include <iostream>

const std::string ERROR = "Stack vuota";

void create_concessionaria(concessionaria& c){
	c = nullptr;
}

void push(concessionaria& c, aut& a){
	cell* aux = new cell;
	aux->info = a;
	aux->next = c;
	c = aux;
}

void pop(concessionaria& c){
	if(c == nullptr)
		throw ERROR;
	cell* aux = c;
	c = c->next;
	delete aux;
}

bool is_in(concessionaria& c, aut& a){
	if(c == nullptr)
		return false;
	if(c->info.casa == a.casa && c->info.modello == a.modello && c->info.immatricolazione == a.immatricolazione)
		return true;
	return is_in(c->next, a);
}

void read_auto(concessionaria& c){
	bool cont = true;
	while(cont){
		aut a;
		std::cout << "Inserisci casa: ";
		std::cin >> a.casa;
		std::cout << "Inserisci modello: ";
		std::cin >> a.modello;
		std::cout << "Inserisci immatricolazione [ggmmaaaa]";
		std::cin >> a.immatricolazione;
		push(c, a);
		std::cout << "Vuoi continuare? [1/0]" << std::endl;
		std::cin >> cont;
	}		
}

void print(concessionaria& c){
	if(c == nullptr)
		return;
	std::cout << c->info.casa << " " << c->info.modello << " " << c->info.immatricolazione << std::endl;
	print(c->next);
}

// Funziona come <
bool meno_recente(aut a1, aut a2){
	int data1 = a1.immatricolazione;
	int anno1 = data1%10000;
	data1 /= 10000;
	int mese1 = data1%100;
	data1 /= 100;
	int giorno1 = data1;

	int data2 = a2.immatricolazione;
	int anno2 = data2%10000;
	data2 /= 10000;
	int mese2 = data2%100;
	data2 /= 100;
	int giorno2 = data2;
	
	if(anno1 < anno2)
		return true;
	else if (anno1 > anno2)
		return false;
	else {
		if(mese1 < mese2)
			return true;
		else if(mese1 > mese2)
			return false;
		else {
			if(giorno1 < giorno2)
				return true;
			else if(giorno1 > giorno2)
				return false;
			else 
				return false;
		}
	}
}

void sort(concessionaria& c){
	cell* curr = c;
	while(curr != nullptr){
		cell* min = curr;
		cell* aux = curr->next;
		while(aux != nullptr){
			if(meno_recente(aux->info, min->info))
				min = aux;
			aux = aux->next;
		}
		
		aut temp = curr->info;
		curr->info = min->info;
		min->info = temp;

		curr = curr->next;
	}
}

int invenduto(concessionaria& c){
	aut aux;
	aux.casa = "";
	aux.modello = "";
	aux.immatricolazione = 11012020;
	if(c == nullptr)
		return 0;

	int tot = 0;
	cell* temp = c;
	while(temp != nullptr){
		tot += meno_recente(temp->info, aux);
		temp = temp->next;
	}
	return tot;
}

// sold
void cancel(concessionaria& c1, aut& a){
	if(c1 == nullptr)
		throw ERROR;

	cell* curr = c1;
	cell* prev = nullptr;
	while (curr != nullptr){
		if (curr->info.casa == a.casa && curr->info.modello == a.modello && curr->info.immatricolazione == a.immatricolazione){
			if(curr == c1){
				pop(c1);
			} else {
				prev->next = curr->next;
				delete curr;
			}
			break;
		}
		prev = curr;
		curr = curr->next;
	}
}

void transfer(concessionaria& c1, concessionaria& c2, aut& a){
	if(is_in(c1, a)){
		cancel(c1, a);
		push(c2, a);
	}
}

void transfer_n(concessionaria& c1, concessionaria& c2, int n){
	cell* aux;
	for(int i = 0; i < n; ++i){
		push(c2, c1->info);
		pop(c1);
	}
}
