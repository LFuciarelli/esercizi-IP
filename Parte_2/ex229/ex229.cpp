#include <iostream>


using namespace std;

int main(){
	char mossa1, mossa2;
	cout << "Le mosse sono:\n[F] - Forbice\n[C] - Carta\n[S] - Sasso\n";
	cout << "Inserire la mossa del giocatore 1: ";
	cin >> mossa1;
	cout << "Inserire la mossa del giocatore 2: ";
	cin >> mossa2;
	if (mossa1 == mossa2)
		cout << "Pareggio\n";
	else {
		if (mossa1 == 'F' && mossa2 == 'C')
			cout << "Giocatore 1 ha vinto\n";
		else if (mossa1 == 'C' && mossa2 == 'S')
			cout << "Giocatore 1 ha vinto\n";
		else if (mossa1 == 'S' && mossa2 == 'F')
			cout << "Giocatore 1 ha vinto\n";
		else
			cout << "Giocatore 2 ha vinto\n";
	}
}
