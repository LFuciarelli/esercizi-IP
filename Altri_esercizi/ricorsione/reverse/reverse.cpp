#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& v, int begin, int end){
	if (v.size()/2 == begin) return;
	int temp = begin;
	v.at(begin) = v.at(end);
	v.at(end) = temp;
	return reverse(v, begin+1, end-1);
}

int main(){
	vector<int>V1{0, 1, 2};
	reverse(V1, 0, V1.size()-1);
	for(int i = 0; i < V1.size(); ++i)	
		cout << V1.at(i) << " ";
	cout << endl;

	vector<int>V2{0, 1, 2, 3};
	reverse(V2, 0, V2.size()-1);
	for(int i = 0; i < V2.size(); ++i)	
		cout << V2.at(i) << " ";
	cout << endl;
}
