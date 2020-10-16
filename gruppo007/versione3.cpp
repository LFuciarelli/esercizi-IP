#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int MAX = 2;
const int TURNI = 1;

int main(){

	string nick;
	cout << "Inserisci un nome/nick: ";
	getline(cin, nick);

	for (int i = 1; i <= 3; i++){
		
		//Mossa giocatore1 - numero scelto dall'utente

		char giocatore1;
		string mossa_giocatore1;

		cout << "\nI gesti sono:\n[F] - Forbice\n[C] - Carta\n[S] - Sasso\n";
		cout << "Inserire il gesto di " << nick << ": ";
		cin >> giocatore1;

		switch (giocatore1){
			case 'F':
				mossa_giocatore1 = "FORBICE";
				break;
			case 'C':
				mossa_giocatore1 = "CARTA";
				break;
			case 'S':
				mossa_giocatore1 = "SASSO";
		}

		// Mossa computer - numero pseudoaleatorio
		
		char computer;
		string mossa_computer;
		int seed = static_cast<int>(time(NULL));
		srand(seed);
		computer = rand()%(MAX+1);

		switch (computer){
			case 0:
				mossa_computer = "FORBICE";
				break;
			case 1:
				mossa_computer = "CARTA";
				break;
			case 2:
				mossa_computer = "SASSO";
		}
		cout << "Il computer gioca " << mossa_computer << endl;
		
		// Esito della partita

		string vincitore;
		if (mossa_giocatore1 == mossa_computer)
			cout << "Pareggio\n";
		else {
			if (mossa_giocatore1 == "FORBICE" && mossa_computer == "CARTA"){
				vincitore = nick;
				cout << mossa_giocatore1 << " vince su " << mossa_computer;
			} else if (mossa_giocatore1 == "CARTA" && mossa_computer == "SASSO"){
				vincitore = nick;
				cout << mossa_giocatore1 << " vince su " << mossa_computer;
			} else if (mossa_giocatore1 == "SASSO" && mossa_computer == "FORBICE"){
				vincitore = nick;
				cout << mossa_giocatore1 << " vince su " << mossa_computer;
			} else {
				vincitore = "computer";
				cout << mossa_computer << " vince su " << mossa_giocatore1;
			}

			cout << "\nHa vinto " << vincitore << endl;
		}
	}
}
