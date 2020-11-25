#include <iostream>
#include <vector>

using namespace std;

void readVector(vector<int>&);
void printVector(const vector<int>&);
vector<int> insert(vector<int>, int, int);


int main(){
	vector<int> vect;
	readVector(vect);
	
	int index, valore;
	cout << "Inserisci index e il valore da aggiungere: ";
	cin >> index >> valore;
	try {
		vector<int> v = insert(vect, index, valore);
		printVector(v);
	} catch(int e) {
		switch(e) {
			case -1:
				cout << "Indice troppo grande!" << endl;
				break;
			case -2:
				cout << "Indice negativo non valido" << endl;
				break;
		}
	}
}

void readVector(vector<int>& v){
	cout << "Inserisci la dimensione della sequenza: ";
	int N;
	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; ++i)
		cin >> v[i];
}

void printVector(const vector<int>& v){
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
}

vector<int> insert(vector<int> v, int i, int val){
	int max = v.size();
	if (i > max)
		throw -1;
	if (i < 0)
		throw -2;
	v.resize(v.size()+1);
	for (int j = v.size(); j > i; --j)
		v[j] = v[j-1];
	v[i] = val;
	return v;
}
