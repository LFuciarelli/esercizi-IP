#include <iostream>

using namespace std;

typedef struct cell_impl cell;
typedef cell* list;

void headInsert(list& l, string s);
void read(list& l);
void tailInsert(list &l, string x);
void print(const list l);
void deleteAll(list &l);
string get(list &l, int idx);

struct cell_impl{
	string content;
	cell_impl* next;
};

int main(){
	list L1 = nullptr;

	headInsert(L1, "head1");
	headInsert(L1, "head2");
	headInsert(L1, "head3");
	print(L1);	
	
	read(L1);
	print(L1);

	tailInsert(L1, "tail1");
	tailInsert(L1, "tail2");
	tailInsert(L1, "tail3");
	print(L1);
	
	int index;
	cout << "Insert index: \n";
	cin >> index;
	cout << "L'elemento nella posizione" << index << " " << " è " << get(L1, index) << endl;

	deleteAll(L1);
	print(L1);
}

void headInsert(list &l, string x){
	cell* aux = new cell;
	aux->content = x;
	aux->next = l;
	l = aux;
}

void tailInsert(list &l, string x){
	cell* aux = new cell;
	aux->content = x;
	aux->next = nullptr;

	cell* tail = l;
	while (tail->next != nullptr){
		tail = tail->next;
	}
	tail->next = aux;
}

void read(list &l){
	string input;
	cout << "Inserisci un elemento [M per uscire]";
	cin >> input;
	while(input != "M"){
		headInsert(l, input);
		cin >> input;
	}
}

void print(const list l){
	list copy = l;
	while(copy != nullptr){
		cout << copy->content << " ";
		copy = copy->next;
	}
	cout << endl;
}

void deleteAll(list &l){
	while(l != nullptr){
		cell* currentCell = l;
		l = currentCell->next;
		delete currentCell;
	}
}

// funzione che acce all'elemento in posizione idx nella lista e lo restituisce
string get(list &l, int idx){
	list copy = l;
	int cont = 0;
	
	// Con or, per esempio, arriverei alla fine della lista che se idx == 0
	while((copy != nullptr) && (cont < idx)){
		copy = copy->next;		
		cont++;		
	}

	if (cont==idx && copy!=nullptr) // sono arrivato all'indice di mio interesse
		return copy->content;
	throw "Out of list error!";		// return "error' è sbagliato
}

// funzione che inserisce un elemento in una lista in maniera ordinata con ordinamento CRESCENTE

// PRECONDIZIONE: la lista data in input è ordinata
// POSTCONDIZIONE: la lista modificata con elemento in più è ancora ordinata

void insertInOrder(list &l, int x){
	cell *aux = new cell;
	aux->content = x;
	
	list cur = l;
	list prev;	
	
	while((cur!=nullptr) && (cur->content<=x)){
		prev=cur;
		cur=cur->next;
	}

	aux->next = cur;
	if(cur == l) // sono in testa
		l=aux;
	else
		prev->next = aux;
		
}
