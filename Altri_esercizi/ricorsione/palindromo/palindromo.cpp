#include <iostream>
#include <vector>

using namespace std;

bool palindromo(vector<int> v, int begin, int end){
	if(v.size()%2 == 1 && v.size()/2 == begin) return true;
	else if (v.size()/2 == begin) return (v.at(begin) == v.at(begin+1));
	return v.at(begin) == v.at(end) && palindromo(v, begin+1, end-1);
}

int main(){
	// Vector non palindromo
	vector<int> V1{1, 2, 3};
	cout << boolalpha << "È palindromo? " << palindromo(V1, 0, V1.size()-1) << endl;

	// Vector palindromo
	vector<int> V2{1, 2, 1};
	cout << boolalpha << "È palindromo? " << palindromo(V2, 0, V2.size()-1) << endl;
}
