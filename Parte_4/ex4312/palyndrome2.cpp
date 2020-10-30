// Versione ottimizzata del programma "palyndrome"

#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	int a[N];
	
	for (int i = 0; i < N; ++i){
		cout << "Valore n. " << i+1 << "(int): ";
		cin >> a[i];
	}

	bool pal = true;
	
	for (int i = 0; i < N/2; ++i){
		if (a[i] != a[N-1-i]){
			pal = false;		
		}
	}
	
	cout << "L'array è un palindromo? " << boolalpha << pal << endl;
}
