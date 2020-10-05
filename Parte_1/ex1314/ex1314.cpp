#include <iostream>
#include <cstdlib>


/*
Prendiamo due numeri come input dall'utente, n1 e n2. La media sarà uguale a (n1 + n2)/2 e la distanza tra la media e il valore n1 sarà uguale alla distanza tra la media e il valore n2.
Infatti possiamo scrivere il valore più piccolo come media - distanza e quello più grande come media + distanza.
(Es. n1 = 4 e n2 = 6, media = 5, distanza = 1).
*/

using namespace std;

int main(){
	float n1, n2;
	cout << "Inserisci un numero: ";
	cin >> n1;
	cout << "Inserisci un altro numero: ";
	cin >> n2;
	float media = (n1 + n2)/2;
	/*Il valore assoluto è utile nel caso il cui n1 (oppure n2, è indifferente) sia maggiore della media.*/
	float dis = abs(media - n1);
	float primo = media - dis;
	float secondo = media + dis;
	cout << "Primo: " << primo << endl;
	cout << "Secondo: " << secondo << endl;
}
