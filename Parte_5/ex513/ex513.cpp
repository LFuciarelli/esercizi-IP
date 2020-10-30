#include <iostream>
#include <cmath>

using namespace std;

struct StraightLine{
	double m; // coefficiente angolare
	double q; // quota
};

struct Point{
	double x;
	double y;
};

int main(){
	cout << "Inserire i parametri della retta R: ";
	StraightLine R;
	cin >> R.m >> R.q;

	cout << "Inserire le coordinate del punto P: ";
	Point P;
	cin >> P.x >> P.y;

	cout << "La retta di equazione y = " << R.m << "x+" << R.q;
	
	double t = 0.00001;
	if (fabs(P.y - R.m*P.x - R.q) < t){
		cout << " passa ";
	} else
		cout << " non passa ";
	cout << "per il punto di coordinate ";
	cout << "(" << P.x << "," << P.y << ")" << endl;
}
