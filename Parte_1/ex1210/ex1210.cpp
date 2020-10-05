#include <iostream>

using namespace std;

int main(){
	int ore, min;
	cout << "Inserisci il numero di ore: [0-23]";
	cin >> ore;
	cout << "Inserisci il numero di minuti: [0-59]";
	cin >> min;
	int tot = ore*60 + min;
	cout << "Il totali di minuti sono: " << tot << endl;
}
