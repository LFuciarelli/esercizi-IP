#include <iostream>

using namespace std;

int main(){
	float AB, BC, AC;
	cout << "Inserisci la misura del lato AB: ";
	cin >> AB;
	cout << "Inserisci la misura del lato BC: ";
	cin >> BC;
	cout << "Inserisci la misura del lato AC: ";
	cin >> AC;
	float per = AB + BC + AC;

	float b, h;
	cout << "Inserisci la misura della base del triangolo: ";
	cin >> b;
	cout << "Inserisci l'altezza del triangolo: ";
	cin >> h;
	float area = (b*h)/2;

	cout << "Perimetro = " << per << endl;
	cout << "Area = " << area << endl;
}
