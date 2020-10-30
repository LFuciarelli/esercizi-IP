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
	
	int max = a[0];
	int n_max = 1;
	
	for (int i = 1; i < N; ++i){
		if (a[i] == max){
			n_max++;		
		} else if (a[i] > max){
			n_max = 1;
			max = a[i];
		}
	}

	cout << "Massimo: " << max << " compare " << n_max << " volt" << (n_max>1? 'e':'a') << endl;
}
