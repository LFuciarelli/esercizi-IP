#include <iostream>

using namespace std;

int main(){
	const int N = 1001;
	bool isprime[N];
	for (int i = 0; i < N; ++i)
		isprime[i] = true;

	int p = 2;
	for (int i = 2; i < N; ++i){
		for (int j = p+1; j < N; ++j){
			if (j % p == 0)
				isprime[j] = false;
		}
		if (isprime[i])
			p = i;
	}

	for (int i = 2; i < N; ++i)
		if (isprime[i])
			cout << i << endl;
}
