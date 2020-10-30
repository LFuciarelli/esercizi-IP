#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	int source[N];

	for (int i = 0; i < N; ++i){
		int val;
		cout << "Valore n. " << i << "(int): ";
		cin >> val;
		source[i] = val;
	}
	
	int dest[N];
	
	for (int i = 0; i < N; ++i){
		dest[i] = source[N - 1 - i];
	}

	for (int i = 0; i < N; ++i){
		cout << source[i] << " " << dest[i] << endl;
	}
}
