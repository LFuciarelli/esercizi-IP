#include <iostream>
#include <string>

using namespace std;

struct data {
	int giorno;
	int mese;
	int anno;
};

struct student {
	string cognome;
	string nome;
	char sesso;
	data nascita;
	int matricola;
};

struct cell {
	student head;
	cell *next;
};

typedef cell* group;

int after(const group& C, int X){
	if(C == nullptr)
		return 0;
	if (C->head.nascita.anno >= X)
		return 1 + after(C->next, X);
	return after(C->next, X);
}

int main(){
	student S1;
	S1.cognome = "Fuciarelli";
	S1.nome = "Laura"; 
	S1.sesso = 'F';
	S1.nascita.anno = 2001;
	S1.nascita.mese = 4;
	S1.nascita.giorno = 24;
	S1.matricola = 123;
	
	student S2;
	S2.cognome = "Menghini";
	S2.nome = "Ion"; 
	S2.sesso = 'M';
	S2.nascita.anno = 1994;
	S2.nascita.mese = 4;
	S2.nascita.giorno = 26;
	S2.matricola = 456;

	student S3;
	S3.cognome = "Ricciardi";
	S3.nome = "Federico"; 
	S3.sesso = 'M';
	S3.nascita.anno = 1988;
	S3.nascita.mese = 4;
	S3.nascita.giorno = 24;
	S3.matricola = 123;
	
	cell* g1 = new cell;
	g1->head = S1;

	cell* g2 = new cell;
	g2->head = S2;

	cell* g3 = new cell;
	g3->head = S3;
	
	g1->next = g2;
	g2->next = g3;
	g3->next = nullptr;
	
	cout << after(g1, 1994) << endl;
}
