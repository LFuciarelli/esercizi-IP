#include <iostream>
#include <vector>


using namespace std;

bool pari(vector<int> v, int i){
	if(v.size() == 0)
		throw "Vector vuoto";
	if(i == 0)
		return (v.at(0) % 2 == 0);	
	return (v.at(i)%2==0)&&pari(v, i-1);
}

int main(){
	vector<int> V{2, 4, 6};
	cout << boolalpha << pari(V, V.size()-1) << endl;
}
