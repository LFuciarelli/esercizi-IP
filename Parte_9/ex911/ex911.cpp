#include <iostream>
#include <string>

using namespace std;

struct person{
	string* name;						// Name é un puntatore
	string surname;
	int birthyear;
};

int main(){
	person personValue;
	string alName = "Al";
	personValue.name = &alName;
	personValue.surname = "Bil";
	personValue.birthyear = 2000;

	person* personPointer;
	personPointer = &personValue;

	cout << "Stampa 1:\n";
	cout << *personValue.name << endl;
	cout << *personPointer->name << endl; // Funziona come personValue.name
	
	string name = "NewName";
	personPointer->name = &name;
	
	cout << "Stampa 2:\n";
	cout << *personValue.name << endl;
	cout << *personPointer->name << endl;	
}
