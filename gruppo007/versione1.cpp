#include <iostream>

using namespace std;

int main(){
	
	// Mosse giocatori

	char giocatore1, giocatore2;

	cout << "I gesti sono:\n[F] - Forbice\n[C] - Carta\n[S] - Sasso\n";
	cout << "Inserire il gesto del giocatore 1: ";
	cin >> giocatore1;
	cout << "Inserire il gesto del giocatore 2: ";
	cin >> giocatore2;

	// Esito della partira

	if (giocatore1 == giocatore2)
		cout << "Pareggio\n";
	else {
		int vincitore;
		if (giocatore1 == 'F' && giocatore2 == 'C')
			vincitore = 1;
		else if (giocatore1 == 'C' && giocatore2 == 'S')
			vincitore = 1;
		else if (giocatore1 == 'S' && giocatore2 == 'F')
			vincitore = 1;
		else
			vincitore = 2;
		cout << "Ha vinto il giocatore " << vincitore << endl;
	}
}
