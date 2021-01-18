#include <iostream>
#include <fstream>

#include "header.h"

using namespace std;

int main(){
	try{
		queue q1;
		create_queue(q1);

		Persona p;
		string info[3];

		ifstream handler;
		string line;
		handler.open("persone.txt");
		if(handler.is_open()){
			int i = 0;
			while(getline(handler, line)){
				info[i] = line;
				i++;
				if(i == 3){
					p.nome = info[0];
					p.cognome = info[1];
					p.anno_nascita = stoi(info[2]);
					enqueue(q1, p);
					i = 0;
				}
			}
		}else {
			cerr << "Unable to open the file!";		
		}
		handler.close();


		//cout << eta(l) << endl;
		sort_queue(q1);
		print(q1);
		dequeue(q1);
	} catch(string s){
		cerr << s << endl;
	}
}
