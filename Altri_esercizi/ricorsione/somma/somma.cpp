#include <iostream>

using namespace std;

int sum_rec(int A[], unsigned int size){
	if (size == 0)
		return 0;
	return A[size-1]+sum_rec(A, size-1);
}

int main(){
	int B[5] = {1, 2, 1, 2, 1};
	cout << sum_rec(B, 5) << endl;
}
