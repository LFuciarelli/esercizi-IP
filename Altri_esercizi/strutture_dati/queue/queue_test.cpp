#include <string>
#include <iostream>

#include "queue.h"

using namespace std;

int main()
try {
	queue q;
	create_empty(q);
	Elem x;
	while(true){
		int op;
		cout << "op (1 enqueue, 2 dequeue, 3 front, 4 back, 5 end): ";
		cin >> op;
		switch(op){
			case 1:
				cin >> x;
				enqueue(q, x);
				break;
			case 2:
				dequeue(q);
				break;
			case 3:
				cout << front(q) << endl;
				break;
			case 4:
				cout << back(q) << endl;
				break;			
			case 5:
				break;
			default:
				cout << "Comando sconosciuto\n";
		} 
		if(op > 4 || op < 1)
			break;
	}
	cout << "fine\n";
} catch(...){
	cerr << "Empty queue" << endl;
}
