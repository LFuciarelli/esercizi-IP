#include <iostream>

using namespace std;

int main(){
	int temp;
	cout << "Inserire la temperatura: ";
	cin >> temp;
	if (temp >= -20 && temp <= 0)
		cout << "Freddo danato\n";
	else if (temp >= 1 && temp <= 15)
		cout << "Freddo\n";
	else if (temp >= 16 && temp <= 23)
		cout << "Normale\n";
	else if (temp >= 24 && temp <= 30)
		cout << "Caldo\n";
	else if (temp >= 31 && temp <= 40)
		cout << "Caldo da morrire\n";
	else
		cout << "Non ci credo, il termometro deve essere rotto\n";
}
