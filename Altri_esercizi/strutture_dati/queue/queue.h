#ifndef queue_h
#define queue_h

typedef int Elem;

struct cell{
	Elem head;
	cell* next;
};

struct queue{
	cell* head;			// indirizzi della prima e dell'ultima cella
	cell* tail;
};

bool isEmpty(const queue&);
void create_empty(queue&);
void enqueue(queue&, Elem);
void dequeue(queue&);
Elem front(const queue&);
Elem back(const queue&);

#endif
