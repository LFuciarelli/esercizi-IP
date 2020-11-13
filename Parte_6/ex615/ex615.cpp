#include <iostream>

using namespace std;

char first_letter(){
	cout << "Inserisci una lettera maiuscola: ";
	char first;
	do {
		cin >> first;
	} while (first < 'A' || first > 'Z');
	char c = 'Z';
	do {
		if (c < first)
			first = c;
		cout << "Inserisci una maiuscola (o altro carattere per terminare)";
		cin >> c;
	} while (c >= 'A' && c <= 'Z');
	return first;
}

int main(){
	char ris = first_letter();
	cout << "La lettere più piccola inserita è " << ris << endl;
}
