#ifndef stack_h
#define stack_h

typedef int Elem;

struct cell{
	Elem head;
	cell* next;
};

typedef cell* stack;

void create_empty(stack&);
bool isEmpty(const stack&);
void push(stack&, Elem);
void pop(stack&);
Elem top(const stack&);

#endif