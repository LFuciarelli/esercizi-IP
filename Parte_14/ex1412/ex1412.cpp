#include <iostream>
#include <string>

using namespace std;

int coeffBin(const int &n, const int &k){
	if (k < 0 || n < 0 || k > n)
		throw "Wrong k/n value";
	else if (n == k || k == 0)
		return 1;
	return coeffBin(n-1, k-1)+coeffBin(n-1, k);
}

int main()
try {
	int riga;
	cout << "Quale riga del triangolo di Tartaglia vuoi stampare?";
	cin >> riga;
	for (int i = 0; i <= riga; ++i)
		cout << coeffBin(riga, i) << " ";
	cout << endl;
} catch (string s) {
	cerr << s << endl;
}
