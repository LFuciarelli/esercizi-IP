#include "phone_book.h"
#include <iostream>

struct Contact_Str_Impl{
	std::string Name;
	std::string Surname;
	int PhoneNumber;
};


void input(PhoneBook& B){
	std::string name;
	std::string surname;
	int phoneNumber;
	
	Contact_Str C;
	std::cout << "Input rubrica (cognome/nome/numero). STOP per fermare\n";
	std::cin >> surname;
	while (surname != "STOP"){
		std::cin >> name;
		std::cin >> phoneNumber;
		add(B, surname, name, phoneNumber);
		std::cin >> surname;
	}
	
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
		std::cout << i+1 << "° contatto:\n";
		std::cout << B.at(i).Surname << " " << B.at(i).Name << " " << B.at(i).PhoneNumber << endl;
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

bool add_ord(PhoneBook& B, string surname, string name, int phoneNumber){
	int pos = FindPos(B, surname);
	Shift_PhoneBook(B, pos);
	B.at(pos+1).Surname = surname;
	B.at(pos+1).Name = name;
	B.at(pos+1).PhoneNumber = phoneNumber;
	return true;
}
