#include <iostream>

using namespace std;

int reverse(int);
bool palindromo(int);

int main(){
	cout << boolalpha << "121 è palindromo? " << palindromo(121) << endl;
	cout << boolalpha << "123 è palindromo? " << palindromo(123) << endl;
}

int reverse(int n){
	int inv = 0;
	while (n > 0){
		int mod = n%10;
		// k e 10 sono numeri interi, quindi il risultato è intero
		n = n/10; 
		inv *= 10;
		inv += mod;
	}
	return inv;
}

bool palindromo(int n){
	return (n == reverse(n));
}

