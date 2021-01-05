#include <iostream>
#include <string>

using namespace std;

// x = 1, n = 3
// 3*3 + sommatoria(1, 2)
// 2*2 + sommatoria(1, 1)
// 1*1

int sommatoria(int x, int n){
	if (x != 1 || n < x){
		string ERROR = "Errore";
		throw ERROR;
	}
	if(n == x)
		return n*n;
	return n*n + sommatoria(x, n-1);
}

int main() 
try {
	cout << sommatoria(1, 3) << endl;
} catch (string st){
	cerr << st << endl;
}
