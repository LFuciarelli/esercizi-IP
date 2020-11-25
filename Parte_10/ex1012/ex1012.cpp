#include <iostream>
#include <vector>

using namespace std;

void readVector(vector<int>&);
void printVector(const vector<int>&);
void SelectionSort_vector(vector<int>&);

int main(){
	vector<int> vect;
	readVector(vect);
	printVector(vect);
	SelectionSort_vector(vect);
	printVector(vect);
}

void SelectionSort_vector(vector<int>& v){
	int greatestIndex;
	for (int i = 0; i < v.size(); ++i){
		greatestIndex = i;
		for (int j = i+1; j < v.size(); ++j)
			if (v[j] < v[greatestIndex])
				greatestIndex = j;
		// swap
		int temp = v[i];
		v[i] = v[greatestIndex];
		v[greatestIndex] = temp;
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
