#include <iostream>
#include <string>
#include <vector>

using namespace std;

void readVector(vector<int>& v){
	char elem;
	while (true){
		cout << "Inserisci un valore intero [usa il carattere 'y' per concludere]: ";
		cin >> elem;
		if (elem == 'y')
			break;
		v.push_back(int(elem));
	}
}

void printVector(const vector<int>& v){
	for (int i = 0; i < v.size(); ++i)
		cout << char(v[i]) << " ";
	cout << endl;
}

int main(){
	vector<int> vect;
	readVector(vect);
	printVector(vect);
}

