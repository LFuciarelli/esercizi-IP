#include <iostream>

using namespace std;

int triangle(int alt){
	for(int i = 1; i <= alt; ++i){
		for(int j = 0; j < alt-i; ++j){
			cout << " ";
		}
		for(int j = 0; j < i; ++j){
			cout << "* ";
		}
		cout << endl;
	}
}

int main(){
	triangle(10);
}
