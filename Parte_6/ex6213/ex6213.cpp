#include <iostream>
#include <cmath>

using namespace std;

const float TOLL = 0.00001;
 
bool risultato1(float n1, float n2, float n3){
	float molt = n1*n2*n3;
	float div = ((molt/n1)/n2)/n3;
	return (fabs(div - 1) < TOLL);
}

int main(){
	cout << boolalpha << risultato1(5.7, 8, 9.88) << endl;
}

