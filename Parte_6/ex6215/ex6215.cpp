#include <iostream>

using namespace std;

void rombo(int);

int main(){
	rombo(8);
}

void rombo(int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 2*n+1; j++){
			if (j < n-i || j > n+i)
				cout << " ";
			else
				cout << "*";			
		}
		cout << endl;
	}

	for (int i = n; i >= 0; i--){
		for (int j = 0; j < 2*n+1; j++){
			if (j < n-i || j > n+i)
				cout << " ";
			else
				cout << "*";			
		}
		cout << endl;
	}
}
