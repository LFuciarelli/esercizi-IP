#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	int a[N];
	int nPari = 0;
	int nDispari = 0;
	int val;

	for (int i = 0; i < N; ++i){
		cout << "Valore n. " << i << " (int): ";
		cin >> val;
		a[i] = val;

		if (a[i] % 2 == 0)
			nPari++;
		else
			nDispari++;
	}

	cout << "Totale numeri pari: " << nPari << endl;
	cout << "Totale numeri dispari: " << nDispari << endl;
}
