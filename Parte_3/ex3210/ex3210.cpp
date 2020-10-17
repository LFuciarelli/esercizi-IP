#include <iostream>

using namespace std;

int main(){
	int num;
	float sum = 0;
	int c = 0;
	float media;
	char answer;
	do {
		cout << "Inserisci un numero intero: ";
		cin >> num;		
		sum += num;
		c++;
		cout << "Vuoi continuare [S/N]: ";
		cin >> answer;	
	} while (answer != 'N');
	media = sum/c;
	cout << "La media è " << media << endl;
}
