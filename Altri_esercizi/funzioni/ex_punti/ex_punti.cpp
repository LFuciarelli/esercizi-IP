#include <iostream>

using namespace std;

struct Point{
	float x;
	float y;
};

Point ReadPoint();
void PrintPoint(Point);
void Swap(Point&, Point&);
void OrderByX(Point&, Point&, Point&);
bool IsAscending(Point, Point, Point);

int main(){
	// PRENDO PUNTI IN INPUT
	Point P1, P2, P3;
	P1 = ReadPoint();
	P2 = ReadPoint();
	P3 = ReadPoint();
	// ORDINO PRIMA LE ASCISSE
	// FACCIO LA VERIFICA (rispetto alle ordinate)
	cout << boolalpha << IsAscending(P1, P2, P3) << endl;
}

// FUNZIONE

Point ReadPoint(){
	cout << "Inserisci le coordinate x e y di un punto\n";
	Point P;	
	cin >> P.x >> P.y;
	return P;
}

void PrintPoint(Point P){
	cout << "(" << P.x << "," << P.y << ")";
}

void Swap(Point &P1, Point &P2){
	Point temp = P2;
	P2 = P1;
	P1 = temp;
}
// POSTCONDIZIONE: P1.X < P2.X < P3.X
void OrderByX(Point &P1, Point &P2, Point &P3){
	// metto a posto il più piccolo in P1
	if ((P2.x < P1.x) && (P2.x < P3.x)) // P2 più piccolo
		Swap(P1, P2);
	if ((P3.x < P1.x) && (P3.x < P2.x)) // P3 più piccolo
		Swap(P1, P3);
	// metto a posto P2 e P3
	if (P3.x < P2.x)
		Swap(P3, P2);
}

bool IsAscending(Point P, Point Q, Point R){
	return ((P.y < Q.y) && (Q.y < R.y));
}
