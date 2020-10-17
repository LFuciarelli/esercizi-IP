#include <iostream>

using namespace std;

int main(){
	char colore;
	bool valido;	
	do {
		cout << "Seleziona un colore:\n[r/R] Rosso";
		cout << "\n[v/V] Verde\n[b/B] Blu";
		cout << "\n[g/G] Giallo\n[a/A] Arancio\n";
		cin >> colore;
		if (colore == 'r' || colore == 'R') valido = true;		
		else if (colore == 'v' || colore == 'V') valido = true;
		else if (colore == 'b' || colore == 'B') valido = true;
		else if (colore == 'g' || colore == 'G') valido = true;
		else if (colore == 'a' || colore == 'A') valido = true;
		cout << endl; 
	} while (!(valido));
}
