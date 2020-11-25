#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& v);
void readVector(vector<int>& v);
vector<int> reverse(vector<int> v);

int main(){
	vector<int> v1;
	readVector(v1);
	
	vector<int> v2;
	v2 = reverse(v1);
	cout << "Source: ";
	printVector(v1);
	cout << "Dest: ";
	printVector(v2);
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

vector<int> reverse(vector<int> v){
	vector<int> v_rev(v.size());
	for (unsigned int i=0; i < v.size(); ++i)
		v_rev.at(v.size()-1-i) = v.at(i);
	return v_rev;
}
