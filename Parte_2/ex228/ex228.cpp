#include <iostream>

using namespace std;

int main(){
	int anno;
	cout << "Inserire un anno: ";
	cin >> anno;
	if (anno % 4 == 0)
		cout << "Secondo il calendario giiuliano, l'anno " << anno << " è bisestile" << endl;
}
