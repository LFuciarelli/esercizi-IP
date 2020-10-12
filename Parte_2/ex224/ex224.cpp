#include <iostream>

using namespace std;

int main(){
	float n1, n2, n3;
	float temp;
	cout << "Inserire il primo numero reale: ";
	cin >> n1;
	cout << "Inserire il secondo numero reale: ";
	cin >> n2;
	cout << "Inserire il terzo numero reale: ";
	cin >> n3;
	if (n1 < n2){
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	if (n1 < n3){
		temp = n1;
		n1 = n3;
		n3 = temp;
	}
	if (n2 < n3){
		temp = n2;
		n2 = n3;
		n3 = temp;
	}
	cout << "I valori in ordine decrescente: " << n1 << " > " << n2 << " > " << n3 << endl;	
}
