#include <iostream>

using namespace std;

int main(){
	cout << "Inserire un numero positivo: ";
	int k;	
	cin >> k;
	if (k < 0){
		cout << "Valore non valido" << endl;
		return 666;
	}
	cout << "Rovesciando " << k;
	int inv = 0;
	while (k > 0){
		int mod = k%10;
		// k e 10 sono numeri interi, quindi il risultato è intero (per difeto)
		k = k/10; 
		inv *= 10;
		inv += mod;
	}
	cout << " si ottiene " << inv << endl;
}
