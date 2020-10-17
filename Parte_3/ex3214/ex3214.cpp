#include <iostream>

using namespace std;

int main(){
	cout << "Inserire un numero positivo: ";
	int num;	
	cin >> num;
	if (num < 0){
		cout << "Valore non valido" << endl;
		return 1;
	}
	int k = num;
	int inv = 0;
	while (k > 0){
		int mod = k%10;
		// k e 10 sono numeri interi, quindi il risultato è intero (per difeto)
		k = k/10; 
		inv *= 10;
		inv += mod;
	}
	if (num == inv)
		cout << "I numeri " << num << " e " << inv << " sono palindromi" << endl;	
	else
		cout << "I numeri " << num << " e " << inv << " non sono palindromi" << endl;
}
