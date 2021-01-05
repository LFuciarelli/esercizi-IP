#include <iostream>

using namespace std;

const int N = 1001;
int main(){
	bool isprime[N];
	for(int i = 0; i < N; ++i)
		isprime[i] = true;
	
	int p;
	for (int i = 2; i < N; ++i){
		if(isprime[i])
			p = i;
		for (int j = p+1; j < N; ++j)
			if(j % p == 0)
				isprime[j] = false;			
	}

	for (int i = 2; i < N; ++i)
		if (isprime[i])
			cout << i << endl;	
}
