#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float num, rad, attempt;
	cout << "Inserisci un numero reale: ";
	cin >> num;
	rad = sqrt(num);
	cout << "Provaci ad indovinare la sua radice quadrata: ";
	do {
		cin >> attempt;
		if (attempt != rad){
			cout << "Risposta sbagliata. Riprovaci: ";	
		}
	} while (attempt != rad);
	cout << "Bravo!\n";
}
