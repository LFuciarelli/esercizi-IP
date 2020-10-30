#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	int a[N];

	for (int i = 0; i < N; ++i){
		int val;
		cout << "Valore n. " << i << " (int): ";
		cin >> val;
		a[i] = val;
	}

	// Simile al 18, l'unica differenza è che alla fine dobbiamo garantire che nessun numero che rappresenti un valore last si azzeri
	int last = a[0];
	int c = 0;
	for (int i = 1; i < N; ++i){
		if (a[i] != last){
			c++;
			a[c] = a[i];
			last = a[i];
		}
		if (i != c)
			a[i] = 0;
	}

	for (int i = 0; i < N; ++i){
		if (a[i] != 0)
			cout << a[i] << " ";
	}

	cout << endl;
}
