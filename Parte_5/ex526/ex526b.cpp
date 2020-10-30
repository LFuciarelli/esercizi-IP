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
	const int N = 3;
	Triangle t[N];
	
	// Input: 3 triangoli
	for (int i = 0; i < 3; ++i){
		cout << "Scrivi le coordinate INTERE di tre punti:\n";
		cout << "Primo vertice: "; cin >> t[i].v1.x >> t[i].v1.y;
		cout << "Secondo vertice: "; cin >> t[i].v2.x >> t[i].v2.y;
		cout << "Terzo vertice: "; cin >> t[i].v3.x >> t[i].v3.y;
		
		// Distanza euclidea per calcolare i lati
		float ll1 = sqrt(pow(t[i].v1.x-t[i].v2.x,2)+pow(t[i].v1.y-t[i].v2.y,2));
		float ll2 =	sqrt(pow(t[i].v1.x-t[i].v3.x,2)+pow(t[i].v1.y-t[i].v3.y,2));
		float ll3 = sqrt(pow(t[i].v2.x-t[i].v3.x,2)+pow(t[i].v2.y-t[i].v3.y,2));

		// Formula di Erone per trovare il perimetro di un triangolo
		t[i].perimetro = ll1+ll2+ll3;
		float semi_per = t[i].perimetro/2;
		t[i].area = sqrt(semi_per*(semi_per-ll1)*(semi_per-ll2)*(semi_per-ll3));
	}
	
	// Trovare il triangolo con l'area maggiore
	int n_max = 0;
	Triangle t_max = t[n_max];
	for (int i = 1; i < 3; ++i){
		if (t[i].area > t_max.area){
			t_max = t[i];
			n_max = i;		
		}
	}

	cout << "Il " << n_max+1 << "° triangolo ha l'area maggiore\n";
}
