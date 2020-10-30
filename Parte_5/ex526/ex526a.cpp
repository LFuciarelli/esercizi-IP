#include <iostream>
#include <cmath>

using namespace std;

struct Point{
	int x, y;
};

struct Triangle {
	Point v1, v2, v3;
	float area;
	float perimetro;
};

int main(){
	Triangle t;
	cout << "Scrivi le coordinate INTERE di tre punti:\n";
	cout << "Primo vertice: "; cin >> t.v1.x >> t.v1.y;
	cout << "Secondo vertice: "; cin >> t.v2.x >> t.v2.y;
	cout << "Terzo vertice: "; cin >> t.v3.x >> t.v3.y;
	
	// distanza euclidea per calcolare i lati
	float ll1 = sqrt(pow(t.v1.x-t.v2.x,2)+pow(t.v1.y-t.v2.y,2));
	float ll2 =	sqrt(pow(t.v1.x-t.v3.x,2)+pow(t.v1.y-t.v3.y,2));
	float ll3 = sqrt(pow(t.v2.x-t.v3.x,2)+pow(t.v2.y-t.v3.y,2));

	// Formula di Erone per trovare il perimetro di un triangolo
	t.perimetro = ll1+ll2+ll3;
	float semi_per = t.perimetro/2;
	t.area = sqrt(semi_per*(semi_per-ll1)*(semi_per-ll2)*(semi_per-ll3));

	// Teorema di pitagora: c^2 = a^2 + b^2 --> c^2 - a^2 - b^2 = 0
	bool pitagoraOK;
	float TOL = 0.0001;
	if (ll1 > ll2 && ll1 > ll3) // ll1 ipotenusa
		pitagoraOK = fabs(ll1*ll1 - ll2*ll2 - ll3*ll3) < TOL;
	else if (ll2 > ll1 && ll2 > ll3) // ll2 ipotenusa
		pitagoraOK = fabs(ll2*ll2 - ll1*ll1 - ll3*ll3) < TOL;
	else if (ll3 > ll1 && ll3 > ll2) // ll3 ipotenusa
		pitagoraOK = fabs(ll3*ll3 - ll1*ll1 - ll2*ll2) < TOL;

	cout << "Il triangolo che hai inserito:\n";
	cout << "- Ha area pari a " << t.area << endl;
	cout << "- Ha perimetro pari a " << t.perimetro << endl;
	if (pitagoraOK)
		cout << "- È rettangolo\n";
	else
		cout << "- Non è rettangolo\n";
}
