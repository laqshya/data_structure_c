#include"Dnode.h"
struct DoubleLL
{
	struct Node* head;
	struct Node* tail;
	int count;
	bool (*addAtBeginPtr)(struct DoubleLL*,int);
	bool (*addAtEndPtr)(struct DoubleLL*,int);
	int (*delFromBeginPtr)(struct DoubleLL*);
	int (*delFromEndPtr)(struct DoubleLL*);
	int (*getSizePtr)(struct DoubleLL*);
	void (*showPtr)(struct DoubleLL*);
};

bool IsEMpty(struct DoubleLL*);
bool addAtBegin(struct DoubleLL*,int);
bool addAtEnd(struct DoubleLL*,int);
int delFromBegin(struct DoubleLL*);
int delFromEnd(struct DoubleLL*);
int getSize(struct DoubleLL*);
void show(struct DoubleLL*);
