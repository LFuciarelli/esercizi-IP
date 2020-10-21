#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX = 100;

const bool debug = true;

int main(){
	int number;
	int seed = static_cast<int>(time(NULL));

	srand(seed);
	number = rand()%(MAX+1);

	if (debug) cout << number << endl;

	int attempt;
	cout << "Inserisci un numero nell'intervallo [0:" << MAX << "]\n";
	do{
		cin >> attempt;
		if (attempt < number)
			cout << "Il numero da indovinare è più grande. Riprova\n";
		if (attempt > number)
			cout << "Il numero da indovinare è più piccolo. Riprova\n";
	} while (number != attempt);
	cout << "Bravo!\n";
}
