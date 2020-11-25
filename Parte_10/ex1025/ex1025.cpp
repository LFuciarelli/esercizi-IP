#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& v);
void readVector(vector<int>& v);
vector<int> cat(vector<int> v1, vector<int> v2);

int main(){
	cout << "Primo vector:\n"; 
	vector<int> first;
	readVector(first);

	cout << "Secondo vector:\n";
	vector<int> second;
	readVector(second);

	printVector(first);
	printVector(second);

	vector<int> total = cat(first, second);	
	printVector(total);
}

void printVector(const vector<int>& v){
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
}

void readVector(vector<int>& v){
	int elem = 1;
	while(true) {
		cout << "Inserisci un valore intero positivo [negativo per finire di leggere]: ";
		cin >> elem;
		if (elem <= 0)
			break;
		v.push_back(elem);
	}
}

vector<int> cat(vector<int> v1, vector<int> v2){
	vector<int> v_cat(v1);			// produce una copia profonda di v1
	for (int i = 0; i < v2.size(); ++i){
		v_cat.push_back(v2.at(i));
	}
	return v_cat;
}
