#include <iostream>

using namespace std;

void triangle(int length){
	for (int i=1; i<=length; ++i){
		for (int j=0; j<i; ++j)
			cout << "*";
		cout << endl;
	}
}

int main(){
	cout << "Inserisci un numero maggiore di 0: ";
	int len;
	cin >> len;
	if (len > 0)
		triangle(len);
	else
		cout << "Errore: valore negativo." << endl;
}
