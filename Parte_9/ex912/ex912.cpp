#include <iostream>

using namespace std;

int main(){
	// Prima parte
	const int N = 5;
	int *v = new int[N];
	
	for (int i = 0; i <= N; ++i)
		v[i] = 2*i+1;

	for (int i = 0; i < N; ++i)
		cout << *(v+i) << " ";
	cout << endl;

	delete[] v;
	v = nullptr;

	// Seconda parte
	v = new int[2*N];

	for (int i = 0; i <= 2*N; ++i)
		v[i] = 2*i+1;

	for (int i = 0; i < 2*N; ++i)
		cout << *(v+i) << " ";
	cout << endl;

	delete[] v;
	v = nullptr;
}
