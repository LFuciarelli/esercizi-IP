#include <iostream>

using namespace std;

int main(){
	const int N = 5;
	int v[N];
	int *p;
	p = v;
	for (int i = 0; i < N; ++i){
		cout << "Inserisci il " << i+1 << "° valore: ";	
		cin >> *(p+i); 
	}

	float sum = 0;
	for (int i = 0; i < N; ++i)
		sum += *(p+i);
	cout << "Media dei valori: " << sum/N << endl;
}
