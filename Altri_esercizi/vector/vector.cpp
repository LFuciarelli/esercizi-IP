#include <iostream>
#include <vector>

using namespace std;

// URL cplusplusreference.com
int main(){
	try {
		vector<int> v; 			// v è vuoto. Se ci provo ad accederlo, viene sollevato un errore
		vector<int> v1(10); 	// v1 contiene dieci volte il valore 0
		
		for (unsigned int i = 0; i < v1.size(); ++i)
			cout << v1[i] << " ";			
		cout << endl;
	} catch(...){
		cerr << "error\n";
	}
}
