#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "Inserisci un numero intero positivo: ";
	cin >> num;
	if (num <= 0){
		cout << "Avevo detto positivo!";
		return 1;
	}

	int cifre = 0;
	int pot = 1;
	while (pot <= num){
		cifre++;
		pot *= 10;
	}

	int tot = 0;
	int tot_mod = 1;
	int k = num;
	int mod;
	while (k > 0){
		mod = k % 10; // cifra
		k /= 10;
		for (int i = 0; i < cifre; i++){
			tot_mod *= mod;	
		}
		tot += tot_mod;
		tot_mod = 1;
	}
	if (tot == num)
		cout << num << " è un numero di Armstrong" << endl;
	else
		cout << num << " non è un numero di Armstrong" << endl;
}
