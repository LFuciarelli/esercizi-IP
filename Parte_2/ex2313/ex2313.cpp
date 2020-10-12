#include <iostream>

using namespace std;

int main(){
	int ore, min;
	cout << "Inserire ore: ";
	cin >> ore;
	cout << "Inserire minuti: ";
	cin >> min;
	if (ore < 1 || ore > 12 || min < 0 || min > 59)
		return -1;
	cout << "Sono le ore";
	switch (ore){
		case 1:
			cout << " una";
			break;
		case 2:
			cout << " due";
			break;
		case 3:
			cout << " tre";
			break;
		case 4:
			cout << " quattro";
			break;
		case 5:
			cout << " cinque";
			break;
		case 6:
			cout << " sei";
			break;
		case 7:
			cout << " sette";
			break;
		case 8:
			cout << " otto";
			break;
		case 9:
			cout << " nove";
			break;
		case 10:
			cout << " dieci";
			break;
		case 11:
			cout << " undici";
			break;
		case 12:
			cout << " dodici";
			break;
	}

	if (min >= 15 && min < 30)
		cout << " e un quarto";
	if (min >= 30 && min < 45)
		cout << " e mezza";
	if (min >= 45)
		cout << " e tre quarti";
	if (min % 15 != 0){
		cout << " circa";
	}
	cout << endl;
}
