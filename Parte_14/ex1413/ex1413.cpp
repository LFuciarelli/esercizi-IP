#include <iostream>
#include <string>

using namespace std;

int fibonacci(const int &n){
	if (n < 0)
		throw "Valore negativo";
	if (n == 0 || n == 1)
		return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}

int main()
try {
	cout << "I primi dieci numeri della sequenza di Fibonacci sono:\n";
	for(int i = 0; i < 10; ++i)
		cout << fibonacci(i) << " ";
	cout << endl;
} catch (string s){
	cerr << s << endl;
}
