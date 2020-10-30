#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	int tavolaPitagorica[N][N];
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			tavolaPitagorica[i][j] = (i+1)*(j+1);		
	
	int val1, val2;
	cout << "Inserisci due valori interi: ";
	cin >> val1;
	cin >> val2;
	
	cout << "Il prodotto dei due valore è: " << tavolaPitagorica[val1-1][val2-1] << endl;
}
