#include <iostream>

using namespace std;

float average(int);

int main()
	try {
		cout << "Di quanti numeri vuoi fare la media?";
		int how_many;
		cin >> how_many;
		float risultato = average(how_many);
		cout << "\nLa media è " << risultato << endl;
	} catch (int num){
		cout << "Errore: numero negativo" << endl;	
	}


float average(int hm){
	if (hm < 0){
		int err;
		throw err;
	}
	float sum = 0;
	for (int i = 0; i < hm; ++i){
		cout << "Insercisci un numero \n";
		float x;
		cin >> x;
		sum += x;
	}
	return sum/hm;
}
