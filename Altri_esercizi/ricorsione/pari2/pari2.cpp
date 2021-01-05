#include <iostream>

using namespace std;

int pari(int A[], int size){
	if(size == 0){
		// return (A[size] % 2 == 0)
		if(A[size] % 2 == 0)
			return 1;
		return 0;
	}
	if (A[size] % 2 == 0)
		return 1+pari(A, size-1);
	return pari(A, size-1);
}

int main(){
	int A[5] = {1, 2, 3, 4, 5};
	cout << pari(A, 4) << endl;
}
