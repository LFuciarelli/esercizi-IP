#include <iostream>
#include <vector>

using namespace std;

int ricerca_bin(vector<int> v, int x, int begin, int end){
	if (begin <= end){
		int m = (begin+end)/2;
		if(v.at(m) == x)
			return m;
		else if (x < v.at(m))
			return ricerca_bin(v, x, begin, m-1);
		else
			return ricerca_bin(v, x, m+1, end);
	}
	return -1;
}

int main(){
	vector<int> V{1, 2, 3};
	cout << ricerca_bin(V, 3, 0, V.size()-1) << endl;
	cout << ricerca_bin(V, 4, 0, V.size()-1) << endl;
}
