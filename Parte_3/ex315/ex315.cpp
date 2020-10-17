#include <iostream>

using namespace std;

int main(){
	cout << "Inserisci un numero maggiore di 0: ";
	int length;
	cin >> length;
	for (int i = 1; i <= length; i++){
		for (int j = 1; j <= i; j++){
			cout << "*";	
		}
		cout << endl;	
	}
}
