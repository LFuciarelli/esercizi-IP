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
int FindPos(const PhoneBook&, string);
void Shift_PhoneBook(PhoneBook&, int);
void add_ord(PhoneBook&, string, string, int);

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

	string cognome;
	cout << "Cerca un cognome:";
	cin >> cognome;
	cout << "Posizione del contatto o del contatto precedente: " << FindPos(PB, cognome)+1 << endl;
	
	cout << "Inserisci un nuovo contatto: (cognome/nome/numero)";
	string s, n;
	int t;
	cin >> s >> n >> t;
	add_ord(PB, s, n, t);
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

int FindPos(const PhoneBook& r, string S){
	int mid;
	bool found = false;
	int last = r.size()-1;
	int first = 0;

	while(first <= last && !found){
		mid = (first + last) / 2;
		if(r[mid].Surname == S)
			found = true;
		else if (S < r[mid].Surname) 
			last = mid -1;
		else 
			first = mid + 1;
	}

	if (found)
		return mid;
	else 
		return last;
}

void Shift_PhoneBook(PhoneBook& B, int pos){
	B.resize(B.size()+1);
	for (int i = pos+1; i < B.size()-1; ++i)
		B.at(i+1) = B.at(i);
}

void add_ord(PhoneBook& B, string surname, string name, int phoneNumber){
	int pos = FindPos(B, surname);
	Shift_PhoneBook(B, pos);
	B.at(pos+1).Surname = surname;
	B.at(pos+1).Name = name;
	B.at(pos+1).PhoneNumber = phoneNumber;
}
