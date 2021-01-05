#include <iostream>

using namespace std;

int es5(int n){
	if (n <= 0)
		return 0;
	// 551122
	int p = n%10; 	// p = 2
	n /= 10;		// 551112
	int s = n%10;	// s = 2
	n /= 10;		// n = 5511
	return (p == s) + es5(n);	
}

int main(){
	cout << es5(551122) << endl;
} 
