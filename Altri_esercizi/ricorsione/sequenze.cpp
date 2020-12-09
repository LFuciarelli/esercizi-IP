#include <iostream>

using namespace std;

const int DIM=5;

// funzione void visita ricorsiva e stampa
void print_seq(int A[], int size){
	if(size==0) return;
	print_seq(A, size-1);
	cout << A[size-1];
}

// funzione int calcolo prodotto elementi (analogo a somma)
int prod_seq(int A[], int size){
	if(size <= 0) throw 42;
	if (size == 1) return A[size-1];			// base
	return A[size-1]*prod_seq(A, size-1);
}

// funzione int calcolo il minimo (analogo max)
// ATTENZIONE
int min_seq(int A[], int size){
	if (size <= 0) throw 42;
	if (size == 1) return A[size-1];
	return (A[size-1] < min_seq(A,size-1) ? A[size-1] : min_seq(A,size-1));
}

int main(){
	int v1[DIM] = {2, -1, 4, 0, 3};
	int v2[DIM] = {2, 16, 4, 0, 8};
	
	print_seq(v1, DIM);
	cout << endl;
	cout << "prodotto: " << prod_seq(v1, DIM) << endl;
	cout << "minimo: " << min_seq(v1, DIM) << endl;
	
	print_seq(v2, DIM);
	cout << endl;
	cout << "prodotto: " << prod_seq(v2, DIM) << endl;
	cout << "minimo: " << min_seq(v2, DIM) << endl;
}
