#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int base1, base2;
	cout << "Inserisci un numero positivo: ";
	cin >> base1;
	cout << "Inserisci un altro numero positivo: ";
	cin >> base2;
	if (base1 < 0 || base2 < 0){
		cout << "Avevo detto positivo!";
		return 1;
	}
	int passo = 1;
	if (base1 > base2)
		passo = -1;
	int alt = abs(base1 - base2) + 1;
	int n = base1;
	for (int i = 1; i <= alt; i++){
		for (int j = 1; j <= n; j++){
			cout << 'x';		
		}
		n += passo;
		cout << endl;
	}
	
}
