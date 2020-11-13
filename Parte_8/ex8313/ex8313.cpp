#include <iostream>

using namespace std;

int main(){
	const int N = 3;
	int matrix[N][N];
	int *p = &matrix[0][0];
	for (int i = 0; i < N*N; ++i){
		cout << "Inserisci gli elementi della matrice: ";
		cin >> *(p+i);
	}	

	cout << "Gli elementi della diagonale sono: ";
	cout << *(p);
	for (int i = 1; i < N; ++i)
		cout << " " << *(p+i*N+i);
	cout << endl;
}
