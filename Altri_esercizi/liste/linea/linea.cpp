#include <iostream>

using namespace std;

// Punti del piano cartesiano

struct Point {
 double x;
 double y;
};

// Retta del piano cartesiano di equazione y=mx+n

struct Line {
 double m;
 double n;
};

struct cell {
 Line payload;
 cell *next;
};

typedef cell * Line_Set;

// Funzione utile, da utilizzare quando opportuno

bool equal_fp(double d1, double d2) {
 return (fabs(d1-d2)<10e-5);
}

void drop(Line_Set& ls){
	if (ls != nullptr){
		cell* prev = ls;
		ls = ls->next;
		delete prev;
		prev = nullptr;
} 

void clear(LineSet& ls){
	if (ls == nullptr)
		return;
	cell* aux = ls;
	ls = ls->next;
	delete aux;
	clear(ls);
}

int main(){ 
    Line_Set L1;   
}
