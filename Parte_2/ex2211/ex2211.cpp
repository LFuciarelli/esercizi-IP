#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "Inserire il numero di un mese: ";
	cin >> num;
	switch (num){
		case 1:
			cout << "Gennaio\n";
			break;
		case 2:
			cout << "Febbraio\n";
			break;
		case 3:
			cout << "Marzo\n";
			break;
		case 4:
			cout << "Aprile\n";
			break;
		case 5:
			cout << "Maggio\n";
			break;
		case 6:
			cout << "Giugno\n";
			break;
		case 7:
			cout << "Luglio\n";
			break;
		case 8:
			cout << "Agosto\n";
			break;
		case 9:
			cout << "Settembre\n";
			break;
		case 10:
			cout << "Ottobre\n";
			break;
		case 11:
			cout << "Novembre\n";
			break;
		case 12:
			cout << "Dicembre\n";
			break;
		default:
			cout << "ERRORE: valore non vallido";
	}
}
