#include <iostream>

using namespace std;

int main(){
	int anno;
	cout << "Inserire un anno: ";
	cin >> anno;
	if (anno % 4 == 0){
		if (anno % 100 == 0){
			if (anno % 400 == 0)
				cout << anno << " è un anno bisesitle" << endl;			
			else
				cout << anno << " non è un anno bisestile" << endl; 
		} else {
			cout << anno << " è un anno bisestile" << endl;
		}
	} else {
		cout << anno << " non è un anno bisestile" << endl;
	}
}
