#include <iostream>

using namespace std;

float media(){
	char ris;
	int n;
	int somma = 0;
	int c = 0;
	while(true){
		cout << "Inserire un numero intero: ";
		cin >> n;
		c++;
		somma += n;
		cout << "Vuoi continuare? [S/N]";
		cin >> ris;
		if (ris == 'N' || ris == 'n')
			return (somma*1.0)/c;
	}
}

int main(){
	cout << media() << endl;
}
