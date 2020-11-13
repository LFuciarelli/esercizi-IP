#include <iostream>

using namespace std;

// INTERFACCE

int sum(int x, int y);
void sum_diff(int, int, int&, int&);
void order(int&, int&);


// MAIN

int main(){
	int m, n;
	cout << "Inserisci due interi \n";
	cin >> m >> n;
	int s = sum(m, n);
	cout << "Somma: " << s << endl;
	int d;
	sum_diff(m, n, s, d);
	cout << "Somma: " << s << endl << "Differenza: " << d << endl;
	order(m,n);
	cout << "Valori in ordine: " << m << " " << n << endl;
}

// DICHIARAZIONI

// X E Y SONO PARAMETRI DI INPUT
int sum(int x, int y){
	return (x+y);
}

// X E Y SONO PARAMETRI DI INPUT
// s E D SONO PARAMETRI DI OUTPUT
void sum_diff(int x, int y, int& s, int &d){
	s = x+y;
	d = x-y;
}

// PRIMO ARGOMENTO DEV'ESSERE MINORE CHE IL SECONDO
// PARAMETRI INPUT-OUTPUT
void order(int &x, int &y){
	if (x > y){
		int temp = x;
		x = y;
		y = temp;
	}
}
