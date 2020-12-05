#ifndef STRINGLIST
#define STRINGLIST

#include <string>

typedef struct cell_impl cell;
typedef cell* list;

void headInsert(list& l, std::string s);

void read(list& l);

void print(const list l);

std::string getElem(const list l, int index);

void insertAt(list& l, std::string s, int index);

void deleteAt(list &l, int index);

void deleteOnce(list& l, std::string s);

void deleteAll(list& l, std::string s);

void insertInOrder(list&l, std::string s);

#endif
