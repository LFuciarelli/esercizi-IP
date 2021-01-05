#include <iostream>

using namespace std;

struct cell{
	int info;
	cell* next;
};

typedef cell* list;

bool is_in(list& l, int x){
	if(l == nullptr)
		return false;
	if(l->info == x)
		return true;
	return is_in(l->next, x);
}

int length(list& l){
	if (l == nullptr)
		return 0;
	return 1+length(l->next);
}

bool rec_insertElemOrder(list& l, int x){
	if (is_in(l, x))
		return false;
	
	if (l == nullptr || l->info>x){
		cell* new_cell = new cell;
		new_cell->info = x;

		new_cell->next = l;
		l = new_cell;
		return true;
	}

	rec_insertElemOrder(l->next, x);
}

bool rec_removeElemInOrder(list& l, int x){
	if (l==nullptr){
		return false;
	} else if (l->info == x){
		l = l->next;
		delete l;
		return true;
	}

	rec_removeElemInOrder(l->next, x);
}

bool aGe(const int x, const list l){
	if (l == nullptr)
		return false;
	if (l->next == nullptr)
		return(l->info >= x);
	return (l->info >= x) && aGe(x, l->next);
}

bool e01(const int x, const list l){
	if(l == nullptr)
		return false;
	if (l->info < x)
		return true;
	e01(x, l->next);
}

int main(){
	list L1 = nullptr;
	int elem;
	cout << "Inserisci dieci valori: " << endl;
	for(int i = 0; i < 10; ++i){
		cin >> elem;
		rec_insertElemOrder(L1, elem);
	}
	cout << "Tutti gli elementi sono maggiori o uguali a 5? " << aGe(5, L1) << endl;
	cout << "Esiste un elemento minore di 5? " << e01(5, L1) << endl;
}
