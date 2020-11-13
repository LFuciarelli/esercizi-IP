#include <iostream>

using namespace std;

int reverse(int);

int main(){
	cout << "Inserire un numero intero: ";
	int z;
	cin >> z;
	cout << "Rovesciando " << z << " si ottiene " << reverse(z) << endl;
}

int reverse(int k){
	int sign = 1;
	if (k < 0){
		sign = -1;
		k = -k;
	}
	int inv = 0;
	while (k > 0){
		int mod = k%10;
		k /= 10;
		inv *= 10;
		inv += mod;
	}
	return inv*sign;
}
