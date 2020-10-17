#include <iostream>

using namespace std;

int main(){
	int answer;
	do {
		cout << "1 Prima scelta\n2 Seconda scelta\n3 Terza scelta";
		cout << "\n0 Uscita dal programma\n";
		cin >> answer;
		switch (answer){
			case 1:
				cout << "Hai fatto la prima scelta\n";
				break;
			case 2:
				cout << "Hai fatto la seconda scelta\n";
				break;	
			case 3:
				cout << "Hai fatto la terza scelta\n";
				break;
			case 0:
				cout << "Hai scelto di uscire dal programma\n";
				return 0;
			default:
				cout << "Scelta non valida\n";
		}
	} while (answer != 0);
}
