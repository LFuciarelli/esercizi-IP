#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "Scrivi un valore intero: ";
	cin >> num;
	if (num % 13 == 0)
		cout << num << " è divisibile per 13" << endl;
	else
		cout << num << " non è divisibile per 13" << endl;
}
