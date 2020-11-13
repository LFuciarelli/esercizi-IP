#include <iostream>

using namespace std;

int somma(unsigned int a, unsigned int b, unsigned int max){
	int tot = 0;
	for (unsigned int i = 1; i <= max; ++i){
		if ((i % a == 0) || (i % b == 0))
			tot += i;
	}
	return tot;
}

int main(){
	cout << somma(3, 2, 10) << endl; // 10 compreso
}


