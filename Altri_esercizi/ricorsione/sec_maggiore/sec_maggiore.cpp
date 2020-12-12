#include <iostream>
#include <vector>

using namespace std;

int sec_maggiore(vector<int> v, int max, int sec, int i){
	if(i == v.size())
		return sec;

	if(v.at(i) > max){
		sec = max;
		max = v.at(i);
	}

	return sec_maggiore(v, max, sec, ++i);
}

int main(){
	vector<int> V{2, 3, 4, 5, 2, 9, 2};
	cout << sec_maggiore(V, V.at(0), V.at(1), 0) << endl;
}
