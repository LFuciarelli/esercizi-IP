#include <iostream>

using namespace std;

int main(){
	int alt;
	cout << "Inserisci l'altezza del triangolo: ";
	cin >> alt;
	for (int i = 1; i <= alt; ++i){
		for (int j = 0; j < alt-i; ++j)
			cout << " ";
		for (int j = 0; j < i; ++j)
			cout << "* ";
		cout << endl;
	}
}
