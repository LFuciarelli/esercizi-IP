#include <iostream>

using namespace std;

int main(){
	const int N = 2;
	char matrix[N][N];
	char *p = &matrix[0][0];
	
	for (int i = 0; i < N*N; ++i){
		cout << "Inserisci un carattere: ";
		cin >> (*(p + i));
	}

	bool isUpper = true;
	for (int i = 0; i < N*N; ++i)
		if (*(p + i) < 'A' || *(p + i) > 'Z')
			isUpper = false;
	cout << boolalpha << "Tutti gli elementi sono lettere maiuscole? " << isUpper << endl;
}

