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

int main(){
	list L1 = nullptr;
	cout << boolalpha << "L'elemento 5 é stato inserito? " << rec_insertElemOrder(L1, 5) << endl;
	cout << "Dimensione della lista: " << length(L1) << endl;
	cout << boolalpha << "L'elemento 5 esiste? " << is_in(L1, 5) << endl;
	
	cout << boolalpha << "L'elemento 5 é stato rimosso? " << rec_removeElemInOrder(L1, 5) << endl;
	cout << "Dimensione della lista: " << length(L1) << endl;
	cout << boolalpha << "L'elemento 5 esiste? " << is_in(L1, 5) << endl;
}
