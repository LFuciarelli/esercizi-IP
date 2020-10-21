#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	//INPUT

	int sum = 0;
	int contatore = 0;
	int eta = 0;
	
	//CALCOLI

	cout << "Inserisci eta (numeri interi positivi)" << endl;
	cout << "per uscire dal ciclo scrivi -1" << endl;
	
	while (eta != -1){
		cin >> eta;
		if (eta != -1){
			contatore++;
			sum += eta;
		}
	}
	
	float media;
	media = static_cast<float>(sum)/contatore; //Due numeri interi possono essere non divisibili tra loro, per questo, per garantire che il risultato sii un float, dobbiamo convertire o il numeratore o il denominatore come di tipo float.
	
	//OUTPUT: stampare su standard output la media calcolata
	cout << setprecision(4) << "Media: " << media << endl; 
}
