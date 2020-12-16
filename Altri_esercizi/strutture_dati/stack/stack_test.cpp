#include <string>
#include <iostream>

#include "stack.h"

using namespace std;

int main()
try {
	stack s;
	create_empty(s);
	Elem x;
	while(true){
		int op;
		cout << "op (1 push, 2 pop, 3 top, 4 exit): ";
		cin >> op;
		switch(op){
			case 1:
				cin >> x;
				push(s, x);
				break;
			case 2:
				pop(s);
				break;
			case 3:
				cout << top(s) << endl;
				break;
			case 4:
				break;
			default:
				cout << "Comando sconosciuto\n";
		}
		if(op > 3 || op < 1)
			break;
	}
	cout << "fine\n";
} catch(...){
	cerr << "Empty stack" << endl;
}
