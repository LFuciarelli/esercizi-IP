#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "Inserisci un numero intero positivo [1-3000]";
	cin >> num;
	if (num < 1 || num > 3000){
		cout << "Numero fuori range permesso: ";
		return 1;
	}
	do{
		if (num >= 1000){
			cout << 'M';
			num -= 1000;		
		} else if (num >= 900){
			cout << 'C' << 'M';
			num -= 900;
		} else if (num >= 500){
			cout << 'D';
			num -= 500;
		} else if (num >= 400){
			cout << 'C' << 'D';
			num -= 400;
		} else if (num >= 100){
			cout << 'C';
			num -= 100;
		} else if (num >= 90){
			cout << 'X' << 'C';
			num -= 90;
		} else if (num >= 50){
			cout << 'L';
			num -= 50;		
		} else if (num >= 40){
			cout << 'X' << 'L';
			num -= 40;
		} else if (num >= 10){
			cout << 'X';
			num -= 10;		
		} else if (num >= 9){
			cout << 'I' << 'X';
			num -= 9;
		} else if (num >= 5){
			cout << 'V';
			num -= 5;		
		} else if (num >= 4){
			cout << 'I' << 'V';
			num -= 4;
		} else {
			cout << 'I';
			num -= 1;
		}
	} while (num != 0);
	cout << endl;
}
