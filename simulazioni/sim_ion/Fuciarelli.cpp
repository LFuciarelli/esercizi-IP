#include "header.h"
#include <iostream>
#include <string>

const std::string ERROR = "Empty list";
void InsertNewBook(lista& l, Libreria& libro){
	cell* aux = new cell;
	aux->info = libro;
	aux->next = nullptr;

	if(l == nullptr){
		l = aux;
		return;
	} else if (l->next == nullptr){
		l->next = aux;
		return;
	}

	InsertNewBook(l->next, libro);
}

void printInfo(Libreria& libro){
	std::cout << "Titolo: " << libro.titolo << "\nProduttore: " << libro.produttore << "\nScrittori: " << libro.scrittori;
	std::cout << "\nNumero di pagine: " << libro.pagine << "\nColore copertina: " << libro.colore;
	std::cout << "\nData di pubblicazione: " << libro.pubblicazione.giorno << "/" << libro.pubblicazione.mese << "/" << libro.pubblicazione.anno;
	std::cout << std::endl;
	std::cout << std::endl;
}

void printLibrary(lista& l){
	if(l == nullptr)
		return;
	printInfo(l->info);
	printLibrary(l->next);
}

void sortLibrary(lista& l){
	if(l == nullptr)
		return;
	lista curr = l;
	lista min, aux;
	while(curr != nullptr){
		min = curr;
		aux = curr->next;
		while(aux != nullptr){
			if(aux->info.titolo < min->info.titolo)
				min = aux;
			aux = aux->next;		
		}
		// Swap
		if(min->info.titolo != curr->info.titolo){
			Libreria temp = min->info;
			min->info = curr->info;
			curr->info = temp;		
		}

		curr = curr->next;
	}
}

void pickBook(lista& l, Libreria& libro){
	if(l == nullptr || !(findBook(l, libro.titolo, 0)))
		return;
	lista prev = nullptr;
	lista curr = l;
	while(curr != nullptr){
		if(curr->info.titolo == libro.titolo){
			if(curr == l){
				l = l->next;			
			} else {
				prev->next = curr->next;
			}
			delete curr;
			break;
		}
		prev = curr;
		curr = curr->next;
	}
}

bool findBook(lista& l, std::string infos, int infoi){
	if(l == nullptr)
		return false;
	if (l->info.titolo == infos || l->info.produttore == infos || l->info.scrittori == infos || l->info.colore == infos)
		return true;
	if (l->info.pagine == infoi || l->info.pubblicazione.giorno == infoi || l->info.pubblicazione.mese == infoi || l->info.pubblicazione.anno == infoi)
		return true;
	return findBook(l->next, infos, infoi);
}

int howMany(lista& l){
	if(l == nullptr)
		return 0;
	return 1 + howMany(l->next);
}

int findBiggest(lista& l){
	if(l == nullptr)
		throw ERROR;
	lista aux = l->next;
	int max = l->info.pagine;
	while(aux != nullptr){
		if(aux->info.pagine > max)
			max = aux->info.pagine;
		aux = aux->next;
	}
	return max;
}

int findSmallest(lista& l){
	if(l == nullptr)
		throw ERROR;
	lista aux = l->next;
	int min = l->info.pagine;
	while(aux != nullptr){
		if(aux->info.pagine < min)
			min = aux->info.pagine;
		aux = aux->next;
	}
	return min;
}
