#include <iostream>

using namespace std;

const int DIM = 10;

void insertion(int a[]){
	int temp, location;
	for (int i = 1; i < DIM; ++i){
		if(a[i] < a[i-1]){
			temp = a[i];
			location = i;
			do {
				a[location] = a[location-1];
				location--;
			} while(location > 0 && a[location-1]>temp);
			a[location] = temp;
		}
	}

	for (int i = 0; i < DIM; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main(){
	int b[DIM];
	for (int i = 0; i < DIM; ++i){
		cout << "Inserisci il " << i+1 << "° elemento: ";
		cin >> b[i];
	}
	
	insertion(b);
}
