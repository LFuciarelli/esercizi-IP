#include <iostream>
#include <cmath>

using namespace std;

struct Point{
	double x;
	double y;
};

struct Rect{
	Point top_left;
	Point bottom_right;
};

int main(){
	Rect R1 = {{0, 5}, {10, 0}};
	Rect R2 = {{1, 4}, {8, 2}};
	
	bool test_tl = R1.top_left.x < R2.top_left.x && R1.top_left.y > R2.top_left.y;
	bool test_bt = R1.bottom_right.x > R2.bottom_right.x && R1.bottom_right.y < R2.bottom_right.y;
	
	if (test_tl && test_bt)
		cout << "R2 è contenuto in R1";	
	else
		cout << "R2 non è contenuto in R1";
	cerr << endl;
}
