#include <iostream>

using namespace std;

void not_rom(int);

int main(){
	not_rom(1984);
	not_rom(999);
}

void not_rom(int n){
	do{
		if (n >= 1000){
			cout << 'M';
			n -= 1000;		
		} else if (n >= 900){
			cout << 'C' << 'M';
			n -= 900;
		} else if (n >= 500){
			cout << 'D';
			n -= 500;
		} else if (n >= 400){
			cout << 'C' << 'D';
			n -= 400;
		} else if (n >= 100){
			cout << 'C';
			n -= 100;
		} else if (n >= 90){
			cout << 'X' << 'C';
			n -= 90;
		} else if (n >= 50){
			cout << 'L';
			n -= 50;		
		} else if (n >= 40){
			cout << 'X' << 'L';
			n -= 40;
		} else if (n >= 10){
			cout << 'X';
			n -= 10;		
		} else if (n >= 9){
			cout << 'I' << 'X';
			n -= 9;
		} else if (n >= 5){
			cout << 'V';
			n -= 5;		
		} else if (n >= 4){
			cout << 'I' << 'V';
			n -= 4;
		} else {
			cout << 'I';
			n -= 1;
		}
	} while (n != 0);
	cout << endl;
}
