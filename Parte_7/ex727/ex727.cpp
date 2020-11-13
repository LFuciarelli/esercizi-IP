#include <iostream>

using namespace std;


int main(){
	const int N = 4;
	int M[N][N];
	for (int i=0; i<N; ++i)
		for (int j=0; j<N; ++j)
			cin >> M[i][j];

	bool isSymmetric = true;
	for (int i=0; i<N; ++i)
		for (int j=0; j<N; ++j)
			if (M[i][j] != M[j][i])
				isSymmetric = false;

	cout << "La matrice data " << (isSymmetric ? "è" : "non è") << " simmetrica\n"; 
}
