#include <iostream>

using namespace std;

int num_cifre(char*);

const int N = 5;

int main(){
	char v[N];
	for (int i = 0; i < N; ++i){
		cout << "Inserisci un carattere: ";
		cin >> v[i];
	}

	char *p;
	p = v;
	cout << num_cifre(p) << endl;
}

int num_cifre(char* ptr){
	int tot = 0;
	for (int i = 0; i < N; ++i)
		if ('0' <= *(ptr+i) && '9' >= *(ptr+i))
			tot++;
	return tot;
}
