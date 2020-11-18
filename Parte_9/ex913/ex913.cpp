#include <iostream>

using namespace std;

struct dynamic_array{
	int *store;
	unsigned int size;
};

void read_d_array(dynamic_array&);
void print_d_array(const dynamic_array& d);

int main(){
	dynamic_array a;
	read_d_array(a);
	print_d_array(a);
}

void read_d_array(dynamic_array& d){
	int s = -1;
	while (s <= 0){
		cout << "Inserisci la dimensione del vettore: " << endl;
		cin >> s;
	}

	d.size = s;
	d.store = new int[s];
	for (int i = 0; i < s; ++i){
		cout << "Inserisci un valore: ";
		cin >> d.store[i];
	}
}

void print_d_array(const dynamic_array& d){
	int *p = d.store;
	for (int i = 0; i < d.size; ++i){
		cout << *(p + i) << '\t';	
	}
	cout << endl;
}
