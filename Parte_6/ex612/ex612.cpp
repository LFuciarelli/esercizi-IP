#include <iostream>

using namespace std;

void hello();
void hellomany(int);
int givemefive();
int prossimo(int);
int somma(int, int);

int main(){
	hello();
	hellomany(5);
	cout << givemefive() << endl;
	cout << prossimo(4) << endl;
	cout << somma(2, 3) << endl;
}

void hello(){
	cout << "Hello, world\n";
}

void hellomany(int n){
	cout << "Hello, we are " << n << endl;
}

int givemefive(){
	return 5;
}

int prossimo(int n){
	return n + 1;
}

int somma(int a, int b){
	return a + b;
}
