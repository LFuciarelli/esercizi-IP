#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "Inserisci un numero maggiore di 1: ";
	cin >> num;
	if (num <= 1){
		cout << "Avevo detto maggiore di 1!";
		return 1;	
	}
	int primo = 2;
	int c = 0;
	while (num > 1){
		if (num % primo == 0){
			c += 1;
			num /= primo;
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
