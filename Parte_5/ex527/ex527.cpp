#include <iostream>

using namespace std;

struct Time{
	unsigned int ore;
	unsigned int minuti;
	unsigned int secondi;
};

int main(){
	// Input
	Time T1, T2;
	int ore, min, sec;
	cout << "Inserisci ore, minuti e secondi di T1: ";
	cin >> ore >> min >> sec;
	if ((ore < 0 || ore > 24) || (min < 0 || min > 59) || (sec < 0 || sec > 59)){
		cout << "Valori sbagliati\n";
		return -1;
	} else {
		T1.ore = ore;
		T1.minuti = min;
		T1.secondi = sec;
	}

	cout << "Inserisci ore, minuti e secondi di T2: ";
	cin >> ore >> min >> sec;
	if ((ore < 0 || ore > 24) || (min < 0 || min > 59) || (sec < 0 || sec > 59)){
		cout << "Valoreìi sbagliati";
		return -1;
	} else {
		T2.ore = ore;
		T2.minuti = min;
		T2.secondi = sec;
	}

	// Conversione ore, minuti e secondi di T1 e T2 in secondi
	unsigned int T1sec = T1.ore*3600 + T1.minuti*60 + T1.secondi;
	unsigned int T2sec = T2.ore*3600 + T2.minuti*60 + T2.secondi;
	unsigned int T3sec;
	// Valore assoluto abs non funzione, quindi ho fatto manualmente
	if (T1sec > T2sec)
		T3sec = T1sec - T2sec;
	else
		T3sec = T2sec - T1sec;
	
	// Conversioni secondi di T3 in ore, minuti e secondi
	cout << T3sec << endl;
	Time T3;	
	T3.ore = T3sec/3600;
	T3sec %= 3600;
	T3.minuti = T3sec/60;
	T3sec %= 60;
	T3.secondi = T3sec;

	cout << "Il tempo trascorso tra i due orari è:\n";
	cout << "Ore: " << T3.ore << "\nMinuti: " << T3.minuti << "\nSecondi: " << T3.secondi << endl; 
}
