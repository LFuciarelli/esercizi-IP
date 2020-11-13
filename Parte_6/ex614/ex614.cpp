#include <iostream>

using namespace std;

float area(float, float);

int main()
	try {
		float b, h;
		cout << "Inserisci base e altezza del rettangolo: ";
		cin >> b >> h;
		float a;
		a = area(b, h);
		cout << "L'area del rettangolo è pari a " << a << endl;
	} catch (int num){
		cout << "Errore numero " << num << endl;
	}


float area(float base, float altezza){
	if (base < 0){
		int err = 1;
		throw err;
	}
	if (altezza < 0){
		int err = 2;
		throw err;
	}
	return base*altezza;
}
