#include <iostream>

using namespace std;

// INTERFACCIA/PROTOTIPO/INTESTAZIONE(HEADER)
void StampaRighe (int);
void StampaTriangolo(int);
void StampaAsterischi(int);
void StampaSpazi(int);

int main(){	// FUNZIONE CHIAMANTE
	int m;
	cout << "Inserisci quante righe vuoi stampare\n";
	cin >> m;

	// opportuna CHIAMATA di funzione
	StampaRighe(m); // m è PARAMETRO ATTUALE
	
	StampaTriangolo(m);
}

// Dichiarazione della funzione
// (tipologia valore di ritorno, nome funzione, tipo parametro formale)
void StampaRighe (int n){ // n è PARAMETRO FORMALE
	for (unsigned int i=0; i<n; ++i)
		cout << "**************************\n";
}

void StampaTriangolo(int altezza){
	for (unsigned int i=1; i <= altezza; ++i){
		StampaSpazi(altezza-i);		
		StampaAsterischi(i);
		cout << endl;	
	}
}

void StampaAsterischi(int n){
	for (unsigned int j=1; j <=n; ++j)
		cout << "* ";
}

void StampaSpazi(int n){
	for (unsigned int j=1; j <=n; ++j)
		cout << " ";
}

void StampaElem(int n; string s){
	for (unsigned int j=1; j <=n; ++j)
		cout << s;
}
