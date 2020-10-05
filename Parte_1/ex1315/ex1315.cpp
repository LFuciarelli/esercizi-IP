#include <iostream>

/* a riceve il valore dell'operazione xor tra i bit del valore binario di a e b. Poi, per ricavare il valore originale di a e attribuire questo valore a b, basta prendere il valore attuale di a e usare l'operatore xor con b. Poi la stessa cosa per ricavare il valore originale di b, basta prendere a che ha il valore attuale e b, che ha il valore originale di a*/

using namespace std;

int main(){
	int a, b;
	cout << "Inserisci un numero intero: ";
	cin >> a;
	cout << "Inserisci un altro numero intero: ";
	cin >> b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	/*Le seguenti operazione si potrebbero scrivere pure come a ^= 		b o b ^= a*/
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
