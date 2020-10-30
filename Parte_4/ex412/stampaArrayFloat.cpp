#include <iostream>

using namespace std;

int main(){
	const int N = 10;
	float a[N];

	for (int i = 0; i < N; ++i){
		a[i] = N-i;	
	}

	for (int i = 0; i < N; ++i){
		cout << a[i] << endl;	
	}
}
