#include <iostream>

using namespace std;

int main(){
	cout << "Inserire un numero positivo: ";
	int n;
	cin >> n;
	if (n < 0){
		cout << "Avevo detto positivo!";
		return 7;	
	}

	int F = n;
	for (int i = n-1; i > 1; i--){
		F *= i;
	}
	
	if (F == 0){
		cout << "Il fattoriale di 0 è 1";
	} else {
		cout << "Il fattoriale di " << n << " è " << F; 
	}
}
