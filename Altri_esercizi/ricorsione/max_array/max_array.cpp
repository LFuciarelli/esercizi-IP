#include <iostream>

using namespace std;

int max_array(int A[], unsigned int size){
	if(size == 1)
		return A[0];
	int n1 = A[size-1];
	int n2 = max_array(A, size-1);
	return (n1 > n2 ? n1 : n2);
}

int min_array(int A[], unsigned int size){
	if(size == 1)
		return A[0];
	int n1 = A[size-1];
	int n2 = min_array(A, size-1);
	return (n1 < n2 ? n1 : n2);
}

const int DIM = 5;
int main(){
	int B[DIM] = {6, 1, 7, 5, 2};
	cout << max_array(B, DIM) << endl;
	int C[DIM] = {6, 1, 7, 5, 2};
	cout << min_array(C, DIM) << endl;
}
