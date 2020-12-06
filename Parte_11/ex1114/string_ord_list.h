#ifndef STRINGORDLIST
#define STRINGORDLIST

#include <string>

typedef struct cell_str cell;
typedef cell* list;
typedef list ordList;

void insert(ordList& l, std::string s);

void read(list& l);

void print(const list l);

std::string getElem(const list l, int index);

void deleteAt(list& l, int index);

void deleteOnce(list& l, std::string s);

void deleteAll(list& l, std::string s);

bool are_equal(const list l1, const list l2);

ordList concat(const list l1, const list l2);

ordList unione(const list l1, const list l2);

ordList intersect(const list l1, const list l2);

#endif
