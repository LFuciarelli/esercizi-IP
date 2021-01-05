#include <iostream>

using namespace std;

// 3³ 3*3*3
int pow_rec(int n, unsigned int p){
	if (p == 0)
		return 1;
	return n*pow_rec(n, p-1);
}

int main(){
	cout << pow_rec(5, 2) << endl;		// 25
	cout << pow_rec(3, 3) << endl;		// 27
	cout << pow_rec(1, 0) << endl;		// 1
}
