#include <iostream>
#include <cmath>

using namespace std;

struct Point{
	double x;
	double y;
};

int main(){
	cout << "Inserire le coordinate del punto P1: ";
	Point P1;
	cin >> P1.x >> P1.y;

	cout << "Inserire le coordinate del punto P2: ";
	Point P2;
	cin >> P2.x >> P2.y;
	
	// E se P1.x == P2.x ma P1.y != P2.y e viceversa? 
	double t = 0.00001;
	if ((fabs(P1.x - P2.x) < t) && (fabs(P1.y - P2.y) < t))
		cout << "I punti sono uguali" << endl;
	else {
		cout << "Il secondo punto è ";
		if (P2.y > P1.y)
			cout << "in alto ";
		else if (P2.y < P1.y)
			cout << "in basso";
		if (P2.x > P1.x)
			cout << "a destra ";
		else if (P2.x < P2.x)
			cout << "a sinistra ";
		cout << "rispetto al primo" << endl;
	}
}
