#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "Inserire un numero intero: ";
	cin >> num;
	cout << "Valore assoluto = ";
	if (num < 0)
		cout << -num << endl;
	else
		cout << num << endl;
}
