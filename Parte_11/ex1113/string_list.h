#ifndef STRINGLIST
#define STRINGLIST

#include <string>

typedef struct cell_impl cell;
typedef cell* list;

void headInsert(list& l, std::string s);
void read(list& l);
void print(const list l);
std::string getElem(const list l, int index);
std::string deleteAt(list &l, int index);
std::string insertAt(list& l, std::string s, int index);
void deleteOnce(list& l, int index);
void deleteAll(list& l, std::string s);

#endif
