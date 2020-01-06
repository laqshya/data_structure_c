#include"node.c"
struct LinkedList
{
 	struct	Node* head;
 	struct Node* tail;
	int count;
	int (*sizeptr)(struct LinkedList*);
	bool (*emptyptr)(struct LinkedList*);
	bool (*addAtBeginptr)(struct LinkedList* , int);
	bool (*addAtEndptr)(struct LinkedList*,int);
	void (*displayptr)(struct LinkedList*);
	int (*deleteFromBeginptr)(struct LinkedList*);
	int (*deleteFromEndptr)(struct LinkedList*);
	bool (*insertAtptr)(struct LinkedList*,int,int);

};
int size(struct LinkedList*);
bool empty(struct LinkedList*);
bool addAtBegin(struct LinkedList*, int);
bool addAtEnd(struct LinkedList*,int);
void display(struct LinkedList*);
int deleteFromBegin(struct LinkedList*);
int deleteFromEnd(struct LinkedList*);
bool insertAt(struct LinkedList*,int,int);

