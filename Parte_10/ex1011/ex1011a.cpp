#include <iostream>
#include <vector>

using namespace std;

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

int main(){
	vector<int> vect;
	readVector(vect);
	printVector(vect);
}

