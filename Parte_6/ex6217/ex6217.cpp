#include <iostream>

using namespace std;

bool sqrtx(float, float);

int main(){
	cout << boolalpha << sqrtx(25.3269, 5.03258) << endl;
}

bool sqrtx(float x, float sqrt_x){
	const float TOLL = 0.000001;
	return ((sqrt_x*sqrt_x - x) < TOLL);
}

