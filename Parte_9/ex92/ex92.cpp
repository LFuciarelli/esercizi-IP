#include <iostream>
#include <string>

using namespace std;

struct dynamic_array{
	int *store;
	unsigned int size;
};

void read_d_array(dynamic_array&);
void print_d_array(const dynamic_array& d);
void delete_d_array(dynamic_array&);
void set(dynamic_array &, int, int);
int get(const dynamic_array &, int);
void resize(dynamic_array &, unsigned int);
void d_array_sort(dynamic_array &, string);

int main()
	try {
		dynamic_array a;
		read_d_array(a);
		print_d_array(a);

		set(a, 3, 1);
		cout << get(a, 0) << endl; 	// a[0] non verifica l'out of range
		d_array_sort(a, "selectionsort");
		print_d_array(a);
	} catch (string s) {
		cerr << s << endl;		// cerr - standard error e cout - standard output (sono della stessa natura)
	} catch (...) {
		cerr << "Errore sconosciuto\n";
	}
		

void read_d_array(dynamic_array& d){
	int s = -1;
	while (s <= 0){
		cout << "Inserisci la dimensione del vettore: " << endl;
		cin >> s;
	}

	d.size = s;
	d.store = new int[s];
	for (unsigned int i = 0; i < s; ++i){
		cout << "Inserisci un valore: ";
		cin >> d.store[i];
	}
}

// Const per evitare variazioni nell'array in lettura
void print_d_array(const dynamic_array& d){
	int *p = d.store;
	for (unsigned int i = 0; i < d.size; ++i){
		cout << *(p + i) << '\t';	
	}
	cout << endl;
}

void delete_d_array(dynamic_array& d){
	if (d.size <= 0){
		string err = "Deallocazione non consentita";
		throw err;
	}
	delete[] d.store;
	d.size = 0;
}


// Inserire il valore value nella posizione index dell'array d
void set(dynamic_array &d, int index, int value){
	string err = "Out of range";
	if ((index < 0) || (index > d.size))
		throw err;
	*(d.store + index) = value;
}

// restituisce il contenuto dell'array dinamico nella posizione index
int get(const dynamic_array &d, int index){
	string err = "Out of range";
	if ((index < 0) || (index > d.size))
		throw err;
	return *(d.store + index);
}

void d_array_sort(dynamic_array &d, string algo){
	if (algo == "selectionsort"){
		// ALGORITMO - SELECTION SORT
		int smallest;	
		for (unsigned int i=0; i<d.size; ++i){
			smallest=i;
			for (unsigned int mini=i+1; mini<d.size; ++mini){
				if (d.store[smallest]>d.store[mini])
					smallest=mini;		
			}

	 		// swap
			int temp = d.store[smallest];
			d.store[smallest] = d.store[i];
			d.store[i] = temp;
		}
	} else {
		string err = "Algoritmo non noto";
		throw err;
	}
}
