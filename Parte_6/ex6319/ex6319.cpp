#include <iostream>

using namespace std;

bool isArmstrong(int);

int main(){
	cout << boolaplha << isArmstrong() << endl;
}

bool isArmstrong(int n){
	int cifre = 0;
	int pot = 1;
	while (pot <= n){
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
	return (tot == num)
}
