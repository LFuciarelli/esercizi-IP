#include <iostream>

using namespace std;

int main(){
	int a0, a1, a2;
	int aux;
	cout << "Inserire il primo numero: ";
	cin >> a0;
	cout << "Inserire il secondo numero: ";
	cin >> a1;
	cout << "Inserire il terzo numero: ";
	cin >> a2;
	if (a0 > a1){
		aux = a0;
		a0 = a1;
		a1 = aux;
	}
	if (a0 > a2){
		aux = a0;
		a0 = a2;
		a2 = aux;
	}
	if (a1 > a2){
		aux = a1;
		a1 = a2;
		a2 = aux;
	}
	cout << "I valori in ordine crescente: " << a0 << " < " << a1 << " < " << a2 << endl;	
}
