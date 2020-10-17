#include <iostream>

using namespace std;

int main(){
	int n;
	cout << "Inserisci un numero maggiore di 0: ";
	cin >> n;
	if (n <= 0){
		cout << "Avevo detto positivo!";
		return 1;	
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 2*n+1; j++){
			if (j < n-i || j > n+i)
				cout << " ";
			else
				cout << "*";			
		}
		cout << endl;
	}

	for (int i = n; i >= 0; i--){
		for (int j = 0; j < 2*n+1; j++){
			if (j < n-i || j > n+i)
				cout << " ";
			else
				cout << "*";			
		}
		cout << endl;
	}
}
