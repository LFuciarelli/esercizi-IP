#include <iostream>

using namespace std;

int main(){
	float num1, num2;
	cout << "Inserisci un numero reale: ";
	cin >> num1;
	num2 = ((num1/4.9)/3.53)/6.9998;
	num2 = ((num2*4.9)*3.53)*6.9998;
	if (num1 != num2)
		cout << num1 << " " << num2;
}
