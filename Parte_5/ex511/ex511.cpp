#include <iostream>
#include <string>

using namespace std;

struct Person{
	string name;
	string surname;
	int birthYear; // c'è scritto string nell'eserciziario
};

int main(){
	Person me, you;

	me.name = "Bruce";
	me.surname = "Wayne";
	me.birthYear = 1939;
	
	you.name = "Clark";
	you.surname = "Kent";
	you.birthYear = 1933;

	me = you;
	cout << "My name is " << me.name << " " << me.surname << endl;
	cout << "I was born in " << me.birthYear << endl;
}
