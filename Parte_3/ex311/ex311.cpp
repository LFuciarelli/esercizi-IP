#include <iostream>

using namespace std;

int main(){
	cout << "Di quanti numeri vuoi fare la media?";
	int how_many;	
	cin >> how_many;
	if (how_many <= 0){
		cout << "Errore: il numero doveva essere positivo" << endl;
		return 42;
	}
	float sum = 0;
	for (int c = 0; c < how_many; c++){
		cout << "\nInserisci un numero: ";
		float x;
		cin >> x;
		sum += x;	
	}
	cout << "\nLa media è " << sum/how_many << endl; 
}
