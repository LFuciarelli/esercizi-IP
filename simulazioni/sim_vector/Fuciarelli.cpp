#include "header.h"

#include <iostream>
#include <fstream>
#include <string>

void create_coppia(insieme& i){
	coppia aux;
	std::cout << "Inserisci (x,y): ";
	std::cin >> aux.x >> aux.y;
	i.push_back(aux);
}

void read_file(insieme& i, std::string nomefile){
	std::ifstream handler;
	handler.open(nomefile);
	
	coppia aux;
	while(handler.good()){
		handler >> aux.x;
		handler >> aux.y;
		i.push_back(aux);
	}
	i.resize(i.size()-1);			// elimina dupplicato alla fine
}

void print_coppia(coppia& c){
	std::cout << "(" << c.x << ", " << c.y << ")\n";
}

void print_insieme(insieme& i){
	for(int j = 0; j < i.size(); ++j)
		print_coppia(i.at(j));
}

int cardinalita(insieme& i){
	return i.size();
}

void minimali_massimali(insieme& i, insieme& minimali, insieme& massimali, std::string ordine){
	if(ordine == "lex"){
		coppia max = i[0];
		coppia min = i[0];
		// Vedo se esistono elementi minore o maggiori del primo e li sostituisco durante il ciclo
		for(int j = 1; j < cardinalita(i); ++j){
			if(i[j].x < min.x || (i[j].x == min.x && i[j].y < min.y))
				min = i[j];
			if(i[j].x > max.x || (i[j].x == max.x && i[j].y > max.y))
				max = i[j];
		}
		minimali.push_back(min);
		massimali.push_back(max);
	} else if (ordine == "prod"){
		bool min;
		bool max;
		// Per ciascun elemento di i e vedo se esiste un elemento in i minore o maggiore di questo elemento secondo l'ordine prod
		for(int j = 0; j < cardinalita(i); ++j){
			min = true;
			max = true;
			for(int l = 0; l < cardinalita(i); ++l){
				// Verifica se è un minimale
				if((i[l].x < i[j].x && i[l].y <= i[j].y) || (i[l].x <= i[j].x && i[l].y < i[j].y))
					min = false;
				if((i[l].x < i[j].x && i[l].y <= i[j].y) || (i[l].x <= i[j].x && i[l].y < i[j].y))
					min = false;
				
				// Verifica se è un massimale
				if((i[l].x > i[j].x && i[l].y >= i[j].y) || (i[l].x >= i[j].x && i[l].y > i[j].y))
					max = false;
				if((i[l].x > i[j].x && i[l].y >= i[j].y) || (i[l].x >= i[j].x && i[l].y > i[j].y))
					max = false;					
			}
			if(min) minimali.push_back(i[j]);
			if(max) massimali.push_back(i[j]);
		}
	}
}

void minimo_massimo(insieme& minimali, insieme& massimali, coppia& min, coppia& max){
	// Nel caso in cui non esiste minimo/massimo, loro ricevono la coppia (0, 0), che non appartiene all'universo A
	min.x = 0;
	min.y = 0;
	max.x = 0;
	max.y = 0;
	if(cardinalita(minimali) == 1)
		min = minimali[0];
	if(cardinalita(massimali) == 1)
		max = massimali[0];
}

bool is_in(insieme& i, coppia& c){
	for(int j = 0; j < cardinalita(i); ++j)
		if(i.at(j).x == c.x && i.at(j).y == c.y)
			return true;
	return false;
}

void minoranti_maggioranti(insieme& universo, insieme& minoranti, insieme& maggioranti, insieme& minimali, insieme& massimali, std::string ordine){
	coppia uni, min, mag;
	if(ordine == "lex"){
		// Parte dai minimali e aggiunge ai minoranti tutti gli elementi dell'universo che sono minori o uguali ai minimali
		for(int i = 0; i < cardinalita(minimali); ++i){
			for(int j = 0; j < cardinalita(universo); ++j){
				uni = universo[j];
				min = minimali[i];
				if((uni.x < min.x || (uni.x == min.x && uni.y <= min.y)) && !is_in(minoranti, uni))
					minoranti.push_back(uni);
			}
		}
		// Parte dai massimali e aggiunge ai maggioranti tutti gli elementi dell'universo che sono maggiori o uguali ai massimali
		for(int i = 0; i < cardinalita(massimali); ++i){
			for(int j = 0; j < cardinalita(universo); ++j){
				uni = universo[j];
				min = minimali[i];
				mag = massimali[i];
				if((uni.x > mag.x || (uni.x == mag.x && uni.y >= mag.y)) && !is_in(maggioranti, uni))
					maggioranti.push_back(uni);
			}
		}
	} else if (ordine == "prod"){
		bool vero;
		// Ogni elemento dell'universo che sia minore o uguale rispetto a TUTTI i minimali viene aggiunto ai minoranti
		for(int i = 0; i < cardinalita(universo); ++i){
			vero = true;
			for(int j = 0; j < cardinalita(minimali); ++j){
				uni = universo[i];
				min = minimali[j];
				if(uni.x > min.x || uni.y > min.y) vero = false;
			}
			if(vero) minoranti.push_back(uni);
		}
		// Ogni elemento dell'universo che sia maggiore o uguale rispetto a TUTTI i massimali viene aggiunto ai maggioranti
		for(int i = 0; i < cardinalita(universo); ++i){
			vero = true;
			for(int j = 0; j < cardinalita(massimali); ++j){
				uni = universo[i];
				mag = massimali[j];
				if(uni.x < mag.x || uni.y < mag.y) vero = false;
			}
			if(vero) maggioranti.push_back(uni);
		}
	}
}

void inferiore_superiore(insieme& minoranti, insieme& maggioranti, coppia& inf, coppia& sup, std::string ordine){
	coppia min, max;
	insieme minimali, massimali;

	// L'estremo inferiore è il massimo dell'insieme dei minoranti
	minimali_massimali(minoranti, minimali, massimali, ordine);
	minimo_massimo(minimali, massimali, min, max);
	inf = max;
	
	// Pulisce minimali e massimali, che hanno ancora elementi dell'insieme minoranti
	minimali.clear();
	massimali.clear();

	// L'estremo superiore è il minimo dell'insieme dei maggioranti
	minimali_massimali(maggioranti, minimali, massimali, ordine);
	minimo_massimo(minimali, massimali, min, max);
	sup = min;
}

// Selection sort - versione vector
void sort(insieme& i){
	int min;
	for(int j = 0; j < cardinalita(i); ++j){
		min = j;
		for(int l = j+1; l < cardinalita(i); ++l)
			if(i[l].x < i[min].x || (i[l].x == i[min].x && i[l].y < i[min].y))
				min = l;	
		
		// Swap
		coppia temp = i[j];
		i[j] = i[min];
		i[min] = temp;
	}
}
