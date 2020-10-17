#include <iostream>

using namespace std;

int main(){
	char answer;
	do {
		cout << "Inserisci un numero intero positivo: ";
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++){
			cout << "|";		
		}
		cout << endl;
		cout << "inserisci s o S per terminare, qualsiasi altro carattere per proseguire: ";
		cin >> answer;
	} while (answer != 's' && answer != 'S'); 
	cout << "ho terminato perché hai inserito " << answer << endl;
}
