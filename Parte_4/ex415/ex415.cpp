#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	float a[N];

	for (int i = 0; i < N; ++i)
		a[i] = N-1-i;	

	int i;
	cout << "Inserisci un valore intero tra 0 e " << N << ": ";
	cin >> i;
	
	a[i] = i*i/2.;
	
	for (int i = 0; i < N; ++i) 
		cout << a[i] << " ";
	cout << endl;
}
