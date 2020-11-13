#include <iostream>

using namespace std;

int n_cifre(int);

int main(){
	cout << n_cifre(27458) << endl;
}

int n_cifre(int num){
	int cifre = 0;
	while (num > 0){
		num /= 10;
		cifre++;
	}
	return cifre;
}

