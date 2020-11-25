#include <iostream>
#include <vector>

using namespace std;

void readVector(vector<int>&);
int SequentialSearch_vector(const vector<int>&, int);

int main(){
	vector<int> vect;
	readVector(vect);
	cout << "Cerca un elemento all'interno del vector: ";
	int elem;
	cin >> elem;
	int pos = SequentialSearch_vector(vect, elem);	
	if (pos >= 0)
		cout << "L'elemento si trova nella posizione " << pos+1 << endl;
	else
		cout << "L'elemento non è stato trovato nel vector" << endl;
}

void readVector(vector<int>& v){
	cout << "Inserisci la dimensione della sequenza: ";
	int N;
	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; ++i)
		cin >> v[i];
}

int SequentialSearch_vector(const vector<int> &v, int item){
	int loc = -1;
	bool found = false;
	int i = 0;
	while (!(found) && i < v.size()){
		if (v[i] == item){
			found = true;
			loc = i;
		}
		i++;
	}
	return loc;
}
