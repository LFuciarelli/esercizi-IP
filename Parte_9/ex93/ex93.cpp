#include <iostream>
#include <string>

using namespace std;

struct myvector{
	int size;
	int capacity;
	int *store;
};

void create(myvector&, int);
bool looks_consistent(const myvector&);
void push_back(myvector&, int);
int pop_back(myvector&);
void set(myvector&, int value, int index);
int get(const myvector&, int index);
void destroy(myvector&);
void resize(myvector&, int);
void safe_push_back(myvector&, int);

int main()
	try {
		myvector a;
		int cap = 20;
		create(a, cap);
		for (int i = 1; i <= 10; ++i)
			push_back(a, i);
		pop_back(a);
		set(a, 0, 0);
		cout << get(a, 0) << endl;
		destroy(a);
	} catch (string s) {
		cerr << s << endl;		// cerr - standard error e cout - standard output (sono della stessa natura)
	} catch (...) {
		cerr << "Errore sconosciuto\n";
	}
		

// costruiamo il vector vuoto
void create(myvector &v, int capacity){
	int *T = new int[capacity];
	v.store = T;
	v.capacity = capacity;
	v.size = 0;
}

bool looks_consistent(const myvector &v){
	return (v.store && 0 <= v.size && v.size <= v.capacity && 0 < v.capacity);
}

void push_back(myvector &v, int x){
	if (v.capacity == v.size)
		// Ho finito lo spazio: 1. sollevo un'eccezione
		throw "No space available";
	if (!(looks_consistent(v)))
		throw "Vector not consistent";
	*(v.store+v.size) = x;
	v.size++;
}


int pop_back(myvector &v){
	if (v.size == 0)
		throw "Illegal operation";
	if (!(looks_consistent(v)))
		throw "Vector not consistent";	
	int ultimo = *(v.store+v.size-1);
	v.size--;	// adesso l'ultimo elemento non può essere acceduto
	return ultimo;
}


// Inserire il valore value nella posizione index del vector v
void set(myvector &v, int value, int index){
	if ((index <= 0) || (index >= v.size))
		throw "Out of range";
	if (!(looks_consistent(v)))
		throw "Vector not consistent";
	*(v.store + index) = value;
}

// restituisce il contenuto del vector v nella posizione index
int get(const myvector &v, int index){
	if ((index < 0) || (index > v.size))
		throw "Out of range";
	if (!(looks_consistent(v)))
		throw "Vector not consistent";
	return *(v.store + index);
}

void destroy(myvector &v){
	if (v.size <= 0)
		throw "Destroy not allowed";
	if (!(looks_consistent(v)))
		throw "Vector not consistent";
	delete[] v.store;
	v.store = nullptr;
	v.size = 0;
	v.capacity = 0;
}

// Ho finito lo spazio: 2. chiamo la funzione resize
void resize(myvector &v, int new_capacity){
	if (new_capacity <= 0)
		throw "New_capacity non-positive value";
	if (!(looks_consistent(v)))
		throw "Vector not consistent";
	int *T = new int[new_capacity];
	for (int i = 0; i < v.size; ++i)
		// utile se new_capacity < v.size
		if (i < new_capacity)
			*(T+i) = *(v.store+i);
	delete[] v.store;
	v.store = T;
	v.capacity = new_capacity;
	if (new_capacity < v.capacity)
		v.size = new_capacity;
}

void safe_push_back(myvector &v, int x){
	if (!(looks_consistent(v)))
		throw "Vector not consistent";
	try {
		push_back(v, x);
	} catch (...){
		resize(v, v.capacity*2);
		push_back(v, x);
	}
}


