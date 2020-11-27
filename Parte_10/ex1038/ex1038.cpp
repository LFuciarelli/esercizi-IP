#include <iostream>
#include <vector>

using namespace std;

vector<int> primes(int);
void printVector(const vector<int>&);

int main(){
	int num;
	cout << "Inserisci il un numero intero positivo: ";
	cin >> num;
	vector<int> vect = primes(num);
	printVector(vect);
}

vector<int> primes(int n){
	// Se n = 5, per esempio, vogliamo che il programma consideri i numeri da 0 a 5 (quindi 6 numeri), non soltanto da 0 a 4.
	n++;
	vector<bool> isprime(n, true);
	vector<int> primes;
	int p = 2;
	for (int i = 2; i < n; ++i){
		for (int j = p+1; j < n; ++j){
			if (j % p == 0)
				isprime[j] = false;
		}
		if (isprime[i])
			p = i;
	}

	for (int i = 2; i < n; ++i)
		if (isprime[i])
			primes.push_back(i);
	return primes;
}

void printVector(const vector<int>& v){
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
}
