#include <iostream>

using namespace std;

void replicate2_line(int f, int s, char f_c, char s_c){
	for (int i = 0; i < f; ++i)
		cout << f_c;
	for (int i = 0; i < s; ++i)
		cout << s_c;
}

int main(){
	replicate2_line(3, 7, 's', 'q');
	cout << endl;
}
