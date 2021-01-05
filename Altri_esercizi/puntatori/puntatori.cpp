#include <iostream>

using namespace std;

int main(){
	int *p;
	int a = 4;
	p = &a;
	*p = 5;
	cout << a << endl;	
}
