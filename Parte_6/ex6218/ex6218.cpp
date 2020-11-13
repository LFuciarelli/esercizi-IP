#include <iostream>

using namespace std;

void fattori(int);

int main(){
	fattori(392);
}

void fattori(int n){
	int primo = 2;
	int c = 0;
	while (n > 1){
		if (n % primo == 0){
			c += 1;
			n /= primo;
		} else {
			if (c > 0)
				cout << primo << "^" << c << " ";
			if (primo == 2)
				primo = 3;
			else
				primo += 2;
			c = 0;
		}
	}
	if (c > 0)
		cout << primo << "^" << c << endl;
}

