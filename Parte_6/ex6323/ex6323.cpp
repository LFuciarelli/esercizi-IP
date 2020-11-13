#include <iostream>
#include <cmath>

using namespace std;

int tot_giorni(float, int, float);

int main(){
	float a, s;
	int p;	
	cout << "Inserire litri di acqua iniziali: ";
	cin >> a;
	cout << "Inserire percentuale di evaporazione giornaliera: ";
	cin >> p;
	cout << "Inserire la soglia minima: ";
	cin >> s;
	if (a < 0 || p < 0 || s < 0){
		cout << "Numeri negativi sono invalidi.";
		return -1;
	}
	cout << tot_giorni(a, p, s) << endl; // esempio 50, 10, 5
}

int tot_giorni(float acqua, int per, float soglia){
	int giorni = 0;
	float litri;
	const float TOLL = 0.00001;
	while ((acqua - soglia) > TOLL){
		litri = ((acqua*per)/100); // litri da togliere dalla macchina
		acqua -= litri;
		giorni++;
	}
	return giorni;
	// oppure void tot_giorni()... cout << giorni usando passaggio di parametri per riferimento;
}

