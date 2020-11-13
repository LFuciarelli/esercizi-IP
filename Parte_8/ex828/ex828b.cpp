#include <iostream>

using namespace std;

const int N = 5;
struct Array{
	char arr[N];
	int size = N;
};

int num_cifre(Array);

int main(){
	Array v;
	for (int i = 0; i < v.size; ++i){
		cout << "Inserisci un carattere: ";
		cin >> v.arr[i];
	}

	cout << num_cifre(v) << endl;
}

int num_cifre(Array a){
	int tot = 0;
	char *p = a.arr;
	for (int i = 0; i < a.size; ++i)
		if ('0' <= *(p+i) && '9' >= *(p+i))
			tot++;
	return tot;
}
