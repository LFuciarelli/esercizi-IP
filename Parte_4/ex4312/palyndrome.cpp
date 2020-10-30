#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	int a[N];

	for (int i = 0; i < N; ++i){
		int val;
		cout << "Valore n. " << i << "(int): ";
		cin >> val;
		a[i] = val;
	}
	
	int inv[N];
	
	for (int i = 0; i < N; ++i){
		inv[i] = a[N-1-i];
	}

	bool pal = true;

	for (int i = 0; i < N; ++i){
		if (a[i] != inv[i]){
			pal = false;		
		}
	}
	
	cout << "L'array è un palindromo? " << boolalpha << pal << endl;
}
