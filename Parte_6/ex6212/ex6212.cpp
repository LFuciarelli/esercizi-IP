#include <iostream>
#include <cstdlib>

using namespace std;

void trapezio(int base1, int base2){
	int passo = 1;
	if (base1 > base2)
		passo = -1;
	int altezza = abs(base1 - base2) + 1;
	int n = base1;
	for (int i = 1; i <= altezza; i++){
		for (int j = 1; j <= n; j++){
			cout << 'x';		
		}
		n += passo;
		cout << endl;
	}
}

int main(){
	trapezio(5, 9);
}
