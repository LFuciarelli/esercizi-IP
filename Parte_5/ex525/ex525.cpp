#include <iostream>

using namespace std;

struct Date{
	unsigned int giorno;
	unsigned int mese;
	unsigned int anno;
};

int main(){
	// Input
	Date D1;
	int g, m, a;
	cout << "Inserisci il giorno: ";
	cin >> g;
	if (g <= 0){
		cout << "Giorno invalido\n";
		return -1;
	} else
		D1.giorno = g;

	cout << "Inserisci il mese: ";
	cin >> m;
	if (m <= 0 || m > 12){
		cout << "Mese invalido\n";
		return -1;
	} else
		D1.mese = m;

	cout << "Inserisci l'anno: ";
	cin >> a;
	if (a <= 0){
		cout << "Anno invalido\n";
		return -1;
	} else
		D1.anno = a;
	
	// Verifica se l'anno è bisestile
	bool isleap;
	if (D1.anno % 4 == 0)
		if (D1.anno % 100 == 0)
			if (D1.anno % 400 == 0)
				isleap = true;
			else
				isleap = false;
		else
			isleap = true;
	else
		isleap = false;

	// Verificare se il giorno è valido o no dipendendo dal mese
	if (D1.mese == 1 || D1.mese == 3 || D1.mese == 5 || D1.mese == 7 || D1.mese == 8 || D1.mese == 10 || D1.mese == 12){
		if (D1.giorno > 31){
			cout << "Giorno invalido\n";
			return -1;
		}
	} else if (D1.mese == 4 || D1.mese == 6 || D1.mese == 9|| D1.mese == 9 || D1.mese == 11){
		if (D1.giorno > 30){
			cout << "Giorno invalido\n";
			return -1;		
		}			
	} else {
		if ((D1.giorno > 29 && isleap) || (D1.giorno > 28 && !(isleap))){
			cout << "Giorno invalido\n";
			return -1;
		}
	}
	
	// Output
	if (D1.anno > 2020){
		cout << "La data è futura";
	} else if (D1.anno < 2020){
		cout << "La data è passata";
	} else {
		if (D1.mese > 10){
			cout << "La data è futura";
		} else if (D1.mese < 10){
			cout << "La data è passata";
		} else {
			if (D1.giorno > 28){
				cout << "La data è futura";
			} else if (D1.giorno < 28){
				cout << "La data è passata";
			} else {
				cout << "La data è oggi";
			}
		}	
	}
	cout << endl;	
}
