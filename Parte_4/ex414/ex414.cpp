#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	float a[N];

	for (int i = 0; i < N; ++i){
		float val;
		cout << "Valore n. " << i << "(float): ";
		cin >> val;
		a[i] = val;
	}

	float media = 0.;

	for (int i = 0; i < N; ++i)
		media += a[i];

	media /= N;
	cout << "La media è " << media << endl;
}
