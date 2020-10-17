#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "Inserisci un numero intero positivo: ";
	cin >> num;
	if (num <= 0){
		cout << "Avevo detto postivo!";
		return 1;
	}
	int pot = 1;
	int cifre = 0;	
	while (pot <= num){
		cifre++;
		pot *= 10;
	}
	cout << "Il totale di cifre del numero " << num << " in base dieci è " << cifre << endl;
}
