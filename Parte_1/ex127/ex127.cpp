#include <iostream>

using namespace std;

int main(){
	float b, h;
	cout << "Inserisci la misura della base del rettangolo: ";
	cin >> b;
	cout << "Inserisci l'altezza del rettangolo: ";
	cin >> h;
	float per = (b+h)*2;
	float area = b*h;
	cout << "Perimetro = " << per;
	cout << "\nArea = " << area << endl;
}
