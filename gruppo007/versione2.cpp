#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int MAX = 2;

int main(){
	
	//Mossa giocatore1 - numero scelto dall'utente

	char giocatore1;

	cout << "I gesti sono:\n[F] - Forbice\n[C] - Carta\n[S] - Sasso\n";
	cout << "Inserire il gesto del giocatore 1: ";
	cin >> giocatore1;

	// Mossa computer - numero pseudoaleatorio
	
	int computer;
	int seed = static_cast<int>(time(NULL));
	srand(seed);
	computer = rand()%(MAX+1);

	switch (computer){
		case 0:
			computer = 'F';
			break;
		case 1:
			computer = 'C';
			break;
		case 2:
			computer = 'S';
	}

	// Esito della partita	
	
	string vincitore;
	if (giocatore1 == computer)
		cout << "Pareggio\n";
	else {
		if (giocatore1 == 'F' && computer == 'C')
			vincitore = "giocatore 1";
		else if (giocatore1 == 'C' && computer == 'S')
			vincitore = "giocatore 1";
		else if (giocatore1 == 'S' && computer == 'F')
			vincitore = "giocatore 1";
		else
			vincitore = "computer";
		cout << "Ha vinto " << vincitore << endl;
	}
}
