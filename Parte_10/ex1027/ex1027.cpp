#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Contact_Str{
	string Name;
	string Surname;
	int PhoneNumber;
};

typedef vector<Contact_Str> PhoneBook; // Voglio che Phonebook sia un tipo, non una variabile

void add(PhoneBook&, string, string, int);
void print(const PhoneBook&);
void sortSurnames(PhoneBook&);

void input(PhoneBook& B){
	string name;
	string surname;
	int phoneNumber;
	
	Contact_Str C;
	cout << "Input rubrica (cognome/nome/numero). STOP per fermare\n";
	cin >> surname;
	while (surname != "STOP"){
		cin >> name;
		cin >> phoneNumber;
		add(B, surname, name, phoneNumber);
		cin >> surname;
	}
	
}

int main(){
	PhoneBook PB;
	input(PB);
	sortSurnames(PB);
	print(PB);
}

void add(PhoneBook& B, string surname, string name, int phoneNumber){
	Contact_Str C;
	C.Surname = surname;
	C.Name = name;
	C.PhoneNumber = phoneNumber;	
	B.push_back(C);
}

void print(const PhoneBook& B){
	for (int i = 0; i < B.size(); ++i){
		cout << i+1 << "° contatto:\n";
		cout << B.at(i).Surname << " " << B.at(i).Name << " " << B.at(i).PhoneNumber << endl;
	}
}

void sortSurnames(PhoneBook& B){
	for (int i = 1; i < B.size(); ++i){
		for (int j = i; j > 0 && B[j].Surname < B[j-1].Surname; --j){
			Contact_Str temp = B[j];
			B[j] = B[j-1];
			B[j-1] = temp;
		}
	}
		
}
