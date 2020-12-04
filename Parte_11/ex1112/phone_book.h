#ifndef PHONEBOOK
#define PHONEBOOK

#include <vector>
#include <string>

typedef struct Contact_Str_Impl Contact_Str;
typedef std::vector<Contact_Str> PhoneBook;

void input(PhoneBook& B)
void add(PhoneBook&, std::string, std::string, int);
void print(const PhoneBook&);
void sortSurnames(PhoneBook&);
int FindPos(const PhoneBook&, std::string);
void Shift_PhoneBook(PhoneBook&, int);
bool add_ord(PhoneBook&, std::string, std::string, int);

#endif
