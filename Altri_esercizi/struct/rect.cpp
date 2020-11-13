#include <iostream>
#include <cmath>

using namespace std;

struct Point{
	double x;
	double y;
};

struct Rect{
	Point top_left;
	Point bottom_right;
};

int main(){
	Rect R1;
	Point P1, P2;
	cout << "Inserisci un rettangolo, prima il vertice in alto a sinistra poi quello in basso a destra (usa sdr piano cartesiano)\n";
	cout << "Inserisci coordinate del primo punto x e y\n";
	cin >> P1.x >> P1.y;
	cout << "Inserisci coordinate del secondo punto x e y\n";
	cin >> P2.x >> P2.y;
	
	// verifica geometrica
	if ((P1.x<P2.x) && (P1.y > P2.y)){
		R1.top_left = P1;
		R1.bottom_right = P2;
	} else {
		cout << "Non è un rettangolo\n";	
	}

	// stampa
	cout << "Rettangolo" << endl;
	cout << "Top left: (" << R1.top_left.x << "," << R1.top_left.y << ")\n";
	cout << "Bottom right: (" << R1.bottom_right.x << "," << R1.bottom_right.y << ")\n";
	
	// Da qui in poi è un esercizio diverso
	// è un quadrato
	double base = R1.bottom_right.x - R1.top_left.x;
	double alt = R1.top_left.y - R1.bottom_right.y;
	cout << "Base: " << base << endl;
	cout << "Altezza: " << alt << endl;
	float TOLL = 0.0001;
	if (fabs(base-alt) < TOLL)
		cout << "È un quadrato\n";
	else
		if ((alt - base) > TOLL)
			cout << "È un rettangolo alto\n";
		else {
			R1.bottom_right.x = R1.top_left.x + alt;
			R1.bottom_right.y = R1.top_left.y - base;
		}

	// stampa
	cout << "Rettangolo finale" << endl;
	cout << "Rettangolo" << endl;
	cout << "Top left: (" << R1.top_left.x << "," << R1.top_left.y << ")\n";
	cout << "Bottom right: (" << R1.bottom_right.x << "," << R1.bottom_right.y << ")\n";
}
