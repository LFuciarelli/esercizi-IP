#include <iostream>

using namespace std;

int fib(int n){
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	return fib(n-1) + fib(n-2);
}

int main(){
	// 0, 1, 1, 2, 3, 5
	// 5 = 3 + 2
	cout << fib(5) << endl;
}
